import { Router } from "express";
import { sendStreamData } from "./controllers/stream.controller.js";
import EventEmitter from "events";

let router = new Router();
let myEventEmitter = new EventEmitter();
myEventEmitter.on("firstEvent", (input) => {
  console.log("This is from first event: ", input);
  return "This is from first event: " + input;
});
myEventEmitter.on("secondEvent", async (input) => {
  setTimeout(() => {
    console.log("This is from second event: ", input);
    return "This is from second event: " + input; 
  }, 1000);
});
myEventEmitter.emit("firstEvent", "to first");
myEventEmitter.emit("secondEvent", "to secong");
router.get("/", (req, res) => {
  myEventEmitter.addListener("firstEvent");
  myEventEmitter.addListener("secondEvent");
  res.send("Home"); 
});

router.get("/stream", sendStreamData);

export default router;
