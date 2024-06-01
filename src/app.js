import express from "express";
import router from "./routes.js";

let app = express();

app.use(express.json());
app.use(express.urlencoded()) 
app.use("/", router);

export default app;
