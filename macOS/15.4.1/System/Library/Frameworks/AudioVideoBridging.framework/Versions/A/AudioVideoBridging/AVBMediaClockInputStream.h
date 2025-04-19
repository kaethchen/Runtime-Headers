@class AVB17221AEMStreamFormat, NSArray, AVB17221AEMSamplingRate, AVBMediaClockInputThread, AVBPTPClock, AVBMediaClockSource;

@interface AVBMediaClockInputStream : AVBInputStream {
    BOOL _isStreaming;
    long long _streamType;
    long long _headerVersion;
    unsigned long long _maxPayloadLength;
    unsigned int _maxSamplesPerPacket;
    unsigned int _nominalSamplesPerPacket;
    unsigned int _bytesPerSample;
    unsigned int _channelCount;
    unsigned int _samplesInBuffer;
    unsigned int _cipHi;
    unsigned int _cipLo;
    unsigned int _currentSytInterval;
    unsigned char _timestampsPerPDU;
    unsigned short _timestampInterval;
    unsigned char _aafFormat;
    unsigned char _aafNominalSampleRate;
    BOOL _hasExpectedSequenceNumber;
    BOOL *_presentationTimestampValid;
    unsigned long long *_presentationTimestamps;
    unsigned long long *_packetTimestamps;
    BOOL *_discontinuity;
    struct { unsigned int mediaLocked; unsigned int mediaUnlocked; unsigned int streamInterrupted; unsigned int sequenceNumberMismatch; unsigned int mediaReset; unsigned int timestampUncertain; unsigned int timestampValid; unsigned int timestampNotValid; unsigned int unsupportedFormat; unsigned int receivedPDUs; unsigned int mediaClockReset; unsigned int invalidHeader; } _counters;
    AVBPTPClock *_ptpClock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamingLock;
}

@property (copy, nonatomic) AVB17221AEMStreamFormat *currentFormat;
@property (copy, nonatomic) NSArray *streamFormats;
@property (copy, nonatomic) AVB17221AEMSamplingRate *currentSamplingRate;
@property (copy, nonatomic) NSArray *samplingRates;
@property (readonly, nonatomic) AVBMediaClockSource *mediaClockSource;
@property (readonly, copy, nonatomic) id /* block */ packetProcessingHandler;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } counters;
@property (weak, nonatomic) AVBMediaClockInputThread *inputThread;

+ (id)createClockInputStreamWithStreamID:(unsigned long long)a0 vlanID:(unsigned short)a1 withPriorityCodePoint:(unsigned char)a2 andDestiantionMAC:(id)a3 usingFormats:(id)a4 andSamplingRates:(id)a5 onInterface:(id)a6 usingPTPClock:(id)a7 error:(id *)a8;
+ (BOOL)destroyClockInputStreamWithStreamID:(unsigned long long)a0 onInterface:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)changeFormat:(id)a0 andSamplingRate:(id)a1 error:(id *)a2;
- (id)initWithStreamID:(unsigned long long)a0 onInterfaceNamed:(id)a1 usingPTPClock:(id)a2;
- (id /* block */)packetProcessingHandlerV0;
- (id /* block */)packetProcessingHandlerV1;
- (BOOL)startStreamingWithError:(id *)a0;
- (BOOL)stopStreamingWithError:(id *)a0;

@end
