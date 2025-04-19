@class VZVirtualMachine, VZSerialPortAttachment;

@interface _VZSerialPort : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _serialPortIndex;
    VZSerialPortAttachment *_attachment;
}

@property (readonly) long long type;
@property (retain) VZSerialPortAttachment *attachment;

- (void).cxx_destruct;

@end
