@class NSString, VZSpiceAgent;

@interface VZSpiceAgentPortAttachment : VZSerialPortAttachment <_VZVirtualMachineConfigurationEncodable> {
    VZSpiceAgent *_agent;
}

@property (class, readonly, copy) NSString *spiceAgentPortName;

@property BOOL sharesClipboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
