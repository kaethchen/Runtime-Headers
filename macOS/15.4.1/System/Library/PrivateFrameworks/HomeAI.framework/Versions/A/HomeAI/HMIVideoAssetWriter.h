@class AVAssetWriterInput, NSString, NSObject, AVAssetWriter;
@protocol OS_dispatch_queue, HMIVideoAssetWriterDelegate;

@interface HMIVideoAssetWriter : HMIVideoProcessingNode <AVAssetWriterDelegate, HMFLogging>

@property (retain) AVAssetWriter *assetWriter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) struct opaqueCMFormatDescription { } *videoFormat;
@property (readonly) struct opaqueCMFormatDescription { } *audioFormat;
@property BOOL dropSamplesUntilSync;
@property BOOL dropTrimDurationAttachments;
@property (readonly) BOOL allowRecoveryFromInsufficientAudioTrim;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastFlushedFramePresentationTimeStamp;
@property (copy) id /* block */ assetWriterDidOutputSeparableSegment;
@property (readonly) AVAssetWriterInput *videoInput;
@property (readonly) AVAssetWriterInput *audioInput;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastVideoPresentationTimeStamp;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastAudioPresentationTimeStamp;
@property (weak) id<HMIVideoAssetWriterDelegate> delegate;
@property (retain) NSString *logIdentifier;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredOutputSegmentInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)flush;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)assetWriter:(id)a0 didOutputSegmentData:(id)a1 segmentType:(long long)a2 segmentReport:(id)a3;
- (void)_appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_ensureFirstAudioSampleBufferHasSufficientPrimingTrim:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_failWithDescription:(id)a0;
- (void)_flushAutomatically:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_removeTrimDurationAttachmentsFromAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_startWritingAtStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithVideoFormat:(struct opaqueCMFormatDescription { } *)a0 audioFormat:(struct opaqueCMFormatDescription { } *)a1;
- (id)initWithVideoFormat:(struct opaqueCMFormatDescription { } *)a0 audioFormat:(struct opaqueCMFormatDescription { } *)a1 initialFragmentSequenceNumber:(unsigned long long)a2 preferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;

@end
