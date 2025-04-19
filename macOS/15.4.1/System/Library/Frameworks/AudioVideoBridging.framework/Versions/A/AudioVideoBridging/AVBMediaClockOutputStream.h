@class AVB17221AEMStreamFormat, NSArray, AVB17221AEMSamplingRate, AVBMediaClockSink, AVBMediaClockOutputThread, AVBPTPClock;

@interface AVBMediaClockOutputStream : AVBOutputStream {
    BOOL _isStreaming;
    unsigned long long _streamID;
    long long _streamType;
    long long _headerVersion;
    unsigned long long _bytesPerPacket;
    unsigned int _nominalSamplesPerPacket;
    unsigned int _bitDepth;
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
    unsigned short _dataLength;
    unsigned char _mediaReset;
    AVBPTPClock *_ptpClock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamingLock;
    unsigned long long _lastLaunchTime;
}

@property (copy, nonatomic) AVB17221AEMStreamFormat *currentFormat;
@property (copy, nonatomic) NSArray *streamFormats;
@property (copy, nonatomic) AVB17221AEMSamplingRate *currentSamplingRate;
@property (copy, nonatomic) NSArray *samplingRates;
@property (readonly, copy, nonatomic) id /* block */ packetScheduler;
@property (nonatomic) unsigned long long maxTransitTime;
@property (readonly, nonatomic) AVBMediaClockSink *mediaClockSink;
@property (readonly, nonatomic) struct { unsigned int streamStart; unsigned int streamStop; unsigned int streamInterrupted; unsigned int mediaReset; unsigned int timestampUncertain; unsigned int timestampValid; unsigned int timestampNotValid; unsigned int transmittedPDUs; unsigned int mediaClockReset; } counters;
@property (weak, nonatomic) AVBMediaClockOutputThread *outputThread;

+ (id)createClockOutputStreamWithStreamID:(unsigned long long)a0 vlanID:(unsigned short)a1 withPriorityCodePoint:(unsigned char)a2 andDestiantionMAC:(id)a3 usingFormats:(id)a4 andSamplingRates:(id)a5 onInterface:(id)a6 usingPTPClock:(id)a7 error:(id *)a8;
+ (BOOL)destroyClockOutputStreamWithStreamID:(unsigned long long)a0 onInterface:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)changeFormat:(id)a0 andSamplingRate:(id)a1 error:(id *)a2;
- (id)initWithStreamID:(unsigned long long)a0 destinationMACAddess:(id)a1 vlanID:(unsigned short)a2 priorityCodePoint:(unsigned char)a3 onInterface:(id)a4 usingPTPClock:(id)a5;
- (id /* block */)packetSchedulerV0;
- (id /* block */)packetSchedulerV1;
- (void)setDestinationMAC:(id)a0;
- (void)setVlanID:(unsigned short)a0;
- (BOOL)startStreamingWithError:(id *)a0;
- (BOOL)stopStreamingWithError:(id *)a0;

@end
