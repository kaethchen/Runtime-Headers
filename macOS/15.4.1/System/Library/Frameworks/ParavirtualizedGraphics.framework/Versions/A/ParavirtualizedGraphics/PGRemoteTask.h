@class NSString, PGRemoteTaskDeviceDelegate, NSXPCConnection;
@protocol ParavirtualizedGraphicsGPUTaskProtocol, MTLSharedEvent;

@interface PGRemoteTask : NSObject <PGUserTask> {
    NSXPCConnection *_service;
    id<ParavirtualizedGraphicsGPUTaskProtocol> _delegate;
    id<MTLSharedEvent> _lastFifoEvent;
    PGRemoteTaskDeviceDelegate *_exportedDelegate;
    unsigned int _taskID;
    struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } _setStampIndices;
    int _taskPid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)teardown;
- (void)deleteObjectWithSerializedData:(const void *)a0 serializedDataSize:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)deleteResource:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)discardResources:(const struct { unsigned int x0; } *)a0 count:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)doExecIndirectWithCmdBufCount:(unsigned int)a0 commandData:(id)a1 stampIndex:(unsigned int)a2 fifoEvent:(id)a3 fifoEventValue:(unsigned long long *)a4 resourceCount:(unsigned int)a5 completionHandler:(id /* block */)a6;
- (void)execIndirect2WithCmdBufCount:(unsigned int)a0 cmdBuffers:(struct { unsigned long long x0; unsigned long long x1; } *)a1 resourceCount:(unsigned int)a2 resources:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned long long x5; unsigned long long x6; } *)a3 stampIndex:(unsigned int)a4 fifoEvent:(id)a5 fifoEventValue:(unsigned long long *)a6 completionHandler:(id /* block */)a7;
- (void)execIndirect3WithCmdBufCount:(unsigned int)a0 cmdBuffers:(struct { unsigned long long x0; unsigned long long x1; } *)a1 resourceCount:(unsigned int)a2 resources:(struct { unsigned int x0; union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x0; unsigned int x1; } x1; } *)a3 stampIndex:(unsigned int)a4 fifoEvent:(id)a5 fifoEventValue:(unsigned long long *)a6 completionHandler:(id /* block */)a7;
- (void)fifoDeleted:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)flushResources;
- (void)getComputeInfo:(unsigned int)a0 maxKey:(unsigned int)a1 count:(unsigned int)a2 offset:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)heapTextureSizeAndAlign:(void *)a0 serializerPayloadLength:(unsigned int)a1 replyVirtualOffset:(unsigned long long)a2 replyLength:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)initWithDevice:(id)a0 taskRoot:(unsigned int)a1 length:(unsigned long long)a2 taskID:(unsigned int)a3;
- (void)invalidateResources:(const struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } *)a0 count:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)mapMemoryAtOffset:(unsigned long long)a0 length:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)replacePhysical:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)resetRasterizationRateMap:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)setObjectListOffset:(unsigned long long)a0 objectListLength:(unsigned int)a1 placementListOffset:(unsigned long long)a2 placementListLength:(unsigned int)a3 completionHandler:(id /* block */)a4;
- (void)synchronizeResources:(const struct { unsigned int x0; } *)a0 count:(unsigned int)a1 discard:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)unmapMemoryAtOffset:(unsigned long long)a0 length:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
