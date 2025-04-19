@class NSString, VZSerialPortAttachment;

@interface VZConsolePortConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying>

@property (retain) VZSerialPortAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
