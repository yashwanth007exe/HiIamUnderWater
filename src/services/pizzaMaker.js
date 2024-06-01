import { EventEmitter } from "events";

class PizzaMaker extends EventEmitter {
        constructor(orderId) {
                super();
                this.orderId = orderId;
                this.newOrder();
        }
        newOrder() {
                this.emit("begin");
                setTimeout(() => {
                        this.emit("cookingstarted");
                        setTimeout(() => {
                                this.emit("cookingcompleted");
                        }, 1000);
                        setTimeout(() => {
                                this.emit("end");
                        }, 1000);
                }, 1000);
        }
}

export { PizzaMaker };
