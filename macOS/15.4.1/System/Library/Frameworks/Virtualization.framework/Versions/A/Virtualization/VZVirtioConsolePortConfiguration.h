@class NSString;

@interface VZVirtioConsolePortConfiguration : VZConsolePortConfiguration <_VZVirtualMachineConfigurationEncodable>

@property (copy) NSString *name;
@property BOOL isConsole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
