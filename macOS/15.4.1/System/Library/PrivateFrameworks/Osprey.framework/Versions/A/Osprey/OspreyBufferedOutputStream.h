@class NSOutputStream, NSString, NSMutableData, NSObject;
@protocol OS_dispatch_queue;

@interface OspreyBufferedOutputStream : NSOutputStream <NSStreamDelegate> {
    NSMutableData *_outputBuffer;
    NSOutputStream *_outputStream;
    BOOL _closed;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (BOOL)hasSpaceAvailable;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)streamError;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)hasBufferedData;
- (void)_closeUnderlying;
- (BOOL)_flushBuffer;
- (id)initWithBufferSize:(unsigned long long)a0 underlyingOutputStream:(id)a1 queue:(id)a2;

@end
