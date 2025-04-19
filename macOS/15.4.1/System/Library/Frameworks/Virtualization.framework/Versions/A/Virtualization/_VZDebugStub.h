@interface _VZDebugStub : NSObject

@property (readonly) struct Expected<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { union storage<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { char x0; struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } x1; id x2; } x0; BOOL x1; } _debugStub;

- (id)_init;

@end
