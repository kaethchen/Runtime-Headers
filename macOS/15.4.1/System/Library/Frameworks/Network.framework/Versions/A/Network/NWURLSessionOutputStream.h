@class NSObject, NSError, NSURLSessionStreamTask, NSRunLoop, NSMutableArray;
@protocol OS_dispatch_data, NSStreamDelegate, OS_dispatch_semaphore;

@interface NWURLSessionOutputStream : NSOutputStream {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    BOOL _opened;
    BOOL _writing;
    BOOL _pendingClose;
    unsigned short _writeWaiters;
    NSURLSessionStreamTask *_streamTask;
    id<NSStreamDelegate> _streamDelegate;
    NSRunLoop *_runLoop;
    NSMutableArray *_runLoopModes;
    NSObject<OS_dispatch_semaphore> *_writeSemaphore;
    NSObject<OS_dispatch_data> *_pendingData;
    NSError *_error;
}

- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (BOOL)hasSpaceAvailable;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;

@end
