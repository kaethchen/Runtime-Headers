@protocol _VZGDBDebugStubDelegate;

@interface _VZGDBDebugStub : _VZDebugStub {
    BOOL _listenOnAllNetworkInterfaces;
}

@property (readonly) unsigned short port;
@property (weak) id<_VZGDBDebugStubDelegate> delegate;

- (void).cxx_destruct;
- (struct Expected<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { union storage<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { char x0; struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } x1; id x2; } x0; BOOL x1; })_debugStub;

@end
