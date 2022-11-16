`define ID_IF_Bus 33
`define IF_IF2_Bus 32
`define IF2_ID_Bus 33
`define EX_ID_Bus 70
`define MEM_ID_Bus 70
`define WB_ID_Bus 71
`define ID_EX_Bus 313
`define EX_MEM_Bus 115
`define MEM_WB_Bus 500

`define ctrlBus 3

`define WRITE_STATE_FREE 0
`define WRITE_STATE_LOAD_ADDR 1
`define WRITE_STATE_SEND_DATA 2
`define WRITE_STATE_WAIT_RESP 3

`define READ_STATE_FREE 0
`define READ_STATE_LOAD_ADDR 1
`define READ_STATE_RECEIVE_DATA 2
`define memstop 001
