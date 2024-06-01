import { readFileSync, createReadStream } from "fs"
export const readDataWithFS = async (filePath)=>{
    let data;
    try {
        data = readFileSync(filePath,'utf8');
    } catch (error) {
        return "Error occured : " + error.message;
    }
    return data;
}

export const readDataUsingStream = (filePath)=>{
    let rs = createReadStream(filePath);
    rs.on('data',(data)=>{
        console.log(data)
    })
}