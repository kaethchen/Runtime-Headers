@class VZVirtualMachine, VZNetworkDeviceAttachment;

@interface VZNetworkDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    VZNetworkDeviceAttachment *_attachment;
    long long _type;
    unsigned long long _networkDeviceIndex;
}

@property (readonly) long long _type;
@property (retain) VZNetworkDeviceAttachment *attachment;

- (void).cxx_destruct;

@end
