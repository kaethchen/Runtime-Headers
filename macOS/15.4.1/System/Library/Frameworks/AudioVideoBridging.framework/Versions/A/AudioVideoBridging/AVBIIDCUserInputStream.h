@class NSObject, AVBIIDCStreamConfiguration;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AVBIIDCUserInputStream : AVBInputStream {
    struct __CVPixelBufferPool { } *_cvBufferPool;
    struct __CVBuffer { } *_imageBuffer;
    BOOL _isStreaming;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    AVBIIDCStreamConfiguration *_currentConfiguration;
    unsigned long long _bytesPerVideoFrame;
    unsigned long long _bytesPerPDU;
    unsigned int _pdusPerVideoFrame;
    unsigned long long _timePerPDU;
    unsigned long long _timerPeriod;
    unsigned long long _timerFireTime;
    unsigned char _headerVersion;
}

@property (copy, nonatomic) id /* block */ receivedFrameHandler;
@property (copy, nonatomic) AVBIIDCStreamConfiguration *currentConfiguration;

+ (id)createIIDCUserInputStreamWithStreamID:(unsigned long long)a0 vlanID:(unsigned short)a1 withPriorityCodePoint:(unsigned char)a2 andDestiantionMAC:(id)a3 usingConfigurations:(id)a4 onInterface:(id)a5 usinggPTPClock:(id)a6 error:(id *)a7;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithStreamID:(unsigned long long)a0 onInterfaceNamed:(id)a1 usinggPTPClock:(id)a2;
- (BOOL)startStreamingWithError:(id *)a0;
- (BOOL)stopStreamingWithError:(id *)a0;

@end
