@interface _VZForwardingDebugStubConfiguration : _VZDebugStubConfiguration {
    struct DebugStub { int type; struct FileDescriptor { int _fd; } server_socket_fd; } _debugStub;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)makeDebugStubForVirtualMachine:(id)a0;
- (id)_initWithDebugStub:(struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } *)a0;
- (id)makeDebugStubForCoprocessor;

@end
