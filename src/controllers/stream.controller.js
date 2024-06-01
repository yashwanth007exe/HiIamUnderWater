import { readDataUsingStream, readDataWithFS } from "../services/stream.js";

export const sendStreamData = async (req, res, next) => {
  const noStream = Boolean(req.query.nostream);
  let result;
  if (!noStream) {
    result = await readDataWithFS("src/media/somesmalltextfile.txt");
  }
  result = readDataUsingStream("src/media/somesmalltextfile.txt");
  res.send(result);
};
