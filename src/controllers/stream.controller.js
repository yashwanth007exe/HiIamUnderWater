import { PizzaMaker } from "../services/pizzaMaker.js";
import { readDataUsingStream, readDataWithFS } from "../services/stream.js";

export const sendStreamData = async (req, res) => {
        const noStream = Boolean(req.query.nostream);
        let result;
        if (!noStream) {
                result = await readDataWithFS(
                        "src/media/somesmalltextfile.txt"
                );
        }
        result = readDataUsingStream("src/media/somesmalltextfile.txt");
        res.send(result);
};

export const orderPizza = async (req, res) => {
        let orderId = "orderid123";
        let pizzaMaker = new PizzaMaker(orderId);
        res.setHeader("Content-Type", "text/plain");
        pizzaMaker.on("begin", () => {
                res.write(" begin ");
        });
        pizzaMaker.on("cookingstarted", () => {
                res.write(" cookingstarted ");
        });
        pizzaMaker.on("cookingcompleted", () => {
                res.write(" cookingcompleted ");
        });
        pizzaMaker.on("end", () => {
                res.write(" end ");
                res.end("Order is done " + orderId);
        });
};
