@class NSString, VZVirtualMachine, VZSerialPortAttachment;

@interface VZVirtioConsolePort : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _consoleDeviceIndex;
    unsigned long long _portIndex;
    NSString *_name;
    VZSerialPortAttachment *_attachment;
}

@property (readonly, copy) NSString *name;
@property (retain) VZSerialPortAttachment *attachment;

- (void).cxx_destruct;

@end
