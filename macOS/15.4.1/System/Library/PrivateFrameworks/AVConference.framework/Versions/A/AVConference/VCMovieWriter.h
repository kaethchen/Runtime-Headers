@class AVAssetWriter, NSString, AVAssetWriterInput, NSURL, NSObject, AVAssetWriterInputMetadataAdaptor, VCSandboxedURL;
@protocol OS_dispatch_queue;

@interface VCMovieWriter : VCObject <VCMovieWriterProtocol> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastVideoPresentationTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastLocalAudioPresentationTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastRemoteAudioPresentationTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillImageTime;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_localAudioInput;
    AVAssetWriterInput *_remoteAudioInput;
    AVAssetWriterInput *_metadataInput;
    AVAssetWriterInputMetadataAdaptor *_adapter;
    BOOL _isEndRTPTimestampSet;
    BOOL _writingStarted;
    struct opaqueCMBufferQueue { } *_videoQueue;
    struct opaqueCMBufferQueue { } *_localAudioQueue;
    struct opaqueCMBufferQueue { } *_remoteAudioQueue;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    id /* block */ _completionHandler;
    double _visibleWidth;
    double _visibleHeight;
    struct __CVPixelBufferPool { } *_bufferPool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    unsigned int _codec;
    unsigned int _mediaState;
    BOOL _hasStillImageMetadataTrack;
    double _keyFrameIntervalDuration;
}

@property unsigned int startRTPTimeStamp;
@property unsigned int endRTPTimeStamp;
@property (readonly, nonatomic) BOOL finishWritingInvoked;
@property (readonly) unsigned char writerMode;
@property (retain, nonatomic) NSURL *outputURL;
@property (readonly, nonatomic) NSString *transactionID;
@property (copy, nonatomic) VCSandboxedURL *directoryURL;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setupInputs;
- (void)completeWriting;
- (id)addAudioTrackForLocalAudio:(BOOL)a0;
- (id)addStillImageMetadataTrackWithTransactionID:(id)a0;
- (id)addVideoTrackWithWidth:(int)a0 height:(int)a1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 mediaType:(unsigned char)a1;
- (void)appendMetaData;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 cameraStatus:(unsigned char)a1 mediaType:(unsigned char)a2;
- (void)cleanupAssetWriter;
- (void)finishWritingWithHandler:(id /* block */)a0;
- (id)initWithOutputURL:(id)a0 transactionID:(id)a1 videoCodec:(unsigned int)a2 keyFrameIntervalDuration:(double)a3;
- (void)processSampleQueue:(struct opaqueCMBufferQueue { } *)a0 input:(id)a1 lastPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)a0;
- (void)setStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)setupAssetWriterWithWidth:(int)a0 height:(int)a1 transactionID:(id)a2;
- (id)setupAudioAssetWriterWithTransactionID:(id)a0;
- (void)setupInput:(id)a0 queue:(struct opaqueCMBufferQueue { } *)a1 dispatchGroup:(id)a2 lastPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3;
- (id)setupLivePhotoAssetWithTransactionID:(id)a0;
- (void)setupVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCaptureHeight:(int)a1;
- (void)setupWriterWithMode:(unsigned char)a0;
- (BOOL)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 RTPtimeStamp:(unsigned int)a1 mediaType:(unsigned char)a2;
- (BOOL)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 RTPtimeStamp:(unsigned int)a1 mediaType:(unsigned char)a2;
- (void)startWritingAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
