@class NSString, TSUStreamCompression, NSObject;
@protocol OS_dispatch_queue, TSPComponentWriteChannel;

@interface TSPCompressionComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    NSObject<OS_dispatch_queue> *_writeQueue;
    id<TSPComponentWriteChannel> _writeChannel;
    TSUStreamCompression *_compressor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)a0;
- (id)initWithWriteChannel:(id)a0 compressionAlgorithm:(int)a1 operation:(int)a2;

@end
