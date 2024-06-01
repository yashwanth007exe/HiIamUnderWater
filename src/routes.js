import { Router } from "express";
import { sendStreamData, orderPizza } from "./controllers/stream.controller.js";

let router = new Router();
router.get("/", (req, res) => {
  res.send("Home"); 
});

router.get("/stream", sendStreamData);

router.get('/pizza',orderPizza);

export default router;
