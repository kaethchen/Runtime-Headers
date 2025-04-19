@interface _VZForwardingDebugStub : _VZDebugStub {
    struct DebugStub { int type; struct FileDescriptor { int _fd; } server_socket_fd; } _debugStub;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct Expected<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { union storage<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { char x0; struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } x1; id x2; } x0; BOOL x1; })_debugStub;
- (id)_initWithDebugStub:(struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } *)a0;

@end
