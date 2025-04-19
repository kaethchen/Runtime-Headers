@class ThroughputDelegate, NSObject;
@protocol OS_dispatch_queue, NSStreamDelegate;

@interface UploadDataStream : NSInputStream {
    unsigned long long remainingLength;
    unsigned long long status;
    NSObject<OS_dispatch_queue> *callBackQueue;
    id<NSStreamDelegate> _delegate;
    ThroughputDelegate *_tputDelegate;
    BOOL stalling;
}

- (id)propertyForKey:(id)a0;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (id)initWithLength:(unsigned long long)a0 andThroughputDelegate:(id)a1;
- (void)signalProgress;

@end
