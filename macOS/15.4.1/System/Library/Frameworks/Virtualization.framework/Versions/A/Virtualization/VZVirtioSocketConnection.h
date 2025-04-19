@interface VZVirtioSocketConnection : NSObject {
    struct VirtioSocket { struct Address { unsigned int destination_port; unsigned int source_port; } address; struct FileDescriptor { int _fd; } file_descriptor; } _socket;
}

@property (readonly) unsigned int destinationPort;
@property (readonly) unsigned int sourcePort;
@property (readonly) int fileDescriptor;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id).cxx_construct;

@end
