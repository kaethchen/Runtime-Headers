@class _VZVirtioQueue;

@interface _VZVirtioQueueElement : NSObject {
    struct Element { union { struct { unsigned short descriptor_index; } split; struct { unsigned short buffer_id; unsigned short chained_descriptor_count; } packed; } ; unsigned int bytes_written; struct GuestDescriptors { struct vector<VzCore::Hardware::Virtio::GuestDescriptors::Element, std::allocator<VzCore::Hardware::Virtio::GuestDescriptors::Element>> { struct Element *__begin_; struct Element *__end_; struct __compressed_pair<VzCore::Hardware::Virtio::GuestDescriptors::Element *, std::allocator<VzCore::Hardware::Virtio::GuestDescriptors::Element>> { struct Element *__value_; } __end_cap_; } _elements; } guest_read_buffers; struct GuestDescriptors { struct vector<VzCore::Hardware::Virtio::GuestDescriptors::Element, std::allocator<VzCore::Hardware::Virtio::GuestDescriptors::Element>> { struct Element *__begin_; struct Element *__end_; struct __compressed_pair<VzCore::Hardware::Virtio::GuestDescriptors::Element *, std::allocator<VzCore::Hardware::Virtio::GuestDescriptors::Element>> { struct Element *__value_; } __end_cap_; } _elements; } guest_write_buffers; struct IoVector { unsigned long long _size; struct vector<std::span<unsigned char>, std::allocator<std::span<unsigned char>>> { void *__begin_; void *__end_; struct __compressed_pair<std::span<unsigned char> *, std::allocator<std::span<unsigned char>>> { void *__value_; } __end_cap_; } _buffers; } read_buffers; struct IoVector { unsigned long long _size; struct vector<std::span<unsigned char>, std::allocator<std::span<unsigned char>>> { void *__begin_; void *__end_; struct __compressed_pair<std::span<unsigned char> *, std::allocator<std::span<unsigned char>>> { void *__value_; } __end_cap_; } _buffers; } write_buffers; } _element;
    struct shared_ptr<Vz::SharedMemoryMap> { struct SharedMemoryMap *__ptr_; struct __shared_weak_count *__cntrl_; } _shared_memory_map;
    _VZVirtioQueue *_owningQueue;
    BOOL _has_been_returned;
}

@property (readonly) unsigned long long readBuffersByteCount;
@property (readonly) unsigned long long readBuffersAvailableByteCount;
@property (readonly) unsigned long long writeBuffersByteCount;
@property (readonly) unsigned long long writeBuffersAvailableByteCount;
@property (readonly) unsigned long long writtenByteCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)write:(id)a0 error:(id *)a1;
- (id)peekIntoReadBuffers:(unsigned long long)a0 error:(id *)a1;
- (id)readBuffers;
- (id)readBytes:(unsigned long long)a0 error:(id *)a1;
- (BOOL)readBytesInto:(void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (void)returnToQueue;
- (BOOL)writeData:(void *)a0 length:(unsigned long long)a1 error:(id *)a2;

@end
