const { SerialPort, ReadlineParser } = require("serialport");

//setup port etc.
const serialport = new SerialPort({
  path: "/dev/cu.usbserial-1420",
  baudRate: 9600,
});

//define port parser
const parser = new ReadlineParser();
serialport.pipe(parser);

//read data
parser.on("data", (line) => console.log(line));

//write data to port
serialport.write("ROBOT POWER ON");
