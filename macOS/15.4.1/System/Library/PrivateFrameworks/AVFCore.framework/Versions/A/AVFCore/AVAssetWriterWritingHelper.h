@class NSString, AVAssetWriterFigAssetWriterNotificationHandler, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    BOOL _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    void *_figAssetWriterCallbackContextToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)a0 andFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a1 andDelegate:(id)a2;
+ (id)prepareInputsOperationsWithInputs:(id)a0;

- (void)dealloc;
- (void)finishWriting;
- (long long)status;
- (void)flush;
- (BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)a0;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)a0;
- (struct OpaqueFigAssetWriter { } *)_retainedFigAssetWriter;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)a0;
- (BOOL)areAllInputsPreferredMediaChunkAlignmentEqualTo:(long long)a0;
- (void)cancelWriting;
- (BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForFragmentedMPEG4FileTypeProfile:(id)a0 preferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 returningDebugDescription:(id *)a2;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (unsigned int)encryptionScheme;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)figEncryptionConfigDictionary;
- (id)figTrackReferences;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)flushSegment;
- (BOOL)hasProRes4KHighFPSVideoOutputSetting;
- (BOOL)hasProResVideoOutputSetting;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1 error:(id *)a2;
- (BOOL)isConfiguredForFragmentedMPEG4;
- (void)prepareEncodedSampleBuffersForPaddedWrites;
- (void)setAllInputsFigPreferredChunkAlignmentTo:(long long)a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)storageSpacePreallocationSize;
- (void)transitionToFailedStatusWithError:(id)a0;
- (id)writerInputForTrackID:(int)a0;

@end
