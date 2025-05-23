@class NSArray, SLRequestMultiPartInputStream;
@protocol NSStreamDelegate;

@interface SLRequestBodyInputStream : NSInputStream {
    NSArray *_inputStreams;
    SLRequestMultiPartInputStream *_currentStream;
    unsigned long long _dataLength;
    unsigned long long _dataOffset;
    unsigned long long _currentIndex;
    unsigned long long _currentOffset;
    unsigned long long _currentLength;
    BOOL _openEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoopSource { } *_rls;
    void /* function */ *_clientCallback;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } _clientContext;
    SLRequestBodyInputStream *_selfReferenceDuringStreamEventTrigger;
}

@property (weak) id<NSStreamDelegate> delegate;
@property (readonly) unsigned long long totalBytes;

- (void)dealloc;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)close;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (unsigned long long)bytesRead;
- (id)initWithMultiParts:(id)a0 multiPartBoundary:(id)a1;
- (id)nextStream;

@end
