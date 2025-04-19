@class AVBMediaClockInputStream;

@interface AVBMediaClockInputThread : AVBMediaClockThread {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
    AVBMediaClockInputStream *_streams[8];
    id /* block */ _actions[8];
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)addInputStream:(id)a0;
- (BOOL)removeInputStream:(id)a0;
- (void)addInputStream:(id)a0 processingBlock:(id /* block */)a1;
- (void)removeInputStreamProcessingBlock:(id)a0;
- (void)threadWorkFromTimeSyncTime:(unsigned long long)a0 toTimeSyncTime:(unsigned long long)a1;

@end
