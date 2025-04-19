@class NSObject, AVBIIDCStreamConfiguration;
@protocol OS_dispatch_queue;

@interface AVBIIDCUserOutputStream : AVBOutputStream {
    BOOL _isStreaming;
    NSObject<OS_dispatch_queue> *_internalQueue;
    AVBIIDCStreamConfiguration *_currentConfiguration;
    unsigned long long _bytesPerVideoFrame;
    unsigned long long _bytesPerPDU;
    unsigned int _pdusPerVideoFrame;
    unsigned long long _timePerPDU;
    unsigned char _headerVersion;
    unsigned long long _streamID;
}

@property (copy, nonatomic) id /* block */ callbackHandler;
@property (copy, nonatomic) id /* block */ transmitFrameHandler;
@property (copy, nonatomic) AVBIIDCStreamConfiguration *currentConfiguration;
@property (nonatomic) unsigned int maxTransitTime;

+ (id)createIIDCUserOutputStreamWithStreamID:(unsigned long long)a0 vlanID:(unsigned short)a1 withPriorityCodePoint:(unsigned char)a2 andDestiantionMAC:(id)a3 usingConfigurations:(id)a4 onInterface:(id)a5 usinggPTPClock:(id)a6 error:(id *)a7;

- (void).cxx_destruct;
- (id)initWithStreamID:(unsigned long long)a0 destinationMACAddess:(id)a1 vlanID:(unsigned short)a2 priorityCodePoint:(unsigned char)a3 onInterface:(id)a4 usinggPTPClock:(id)a5;
- (BOOL)startStreamingWithError:(id *)a0;
- (BOOL)stopStreamingWithError:(id *)a0;

@end
