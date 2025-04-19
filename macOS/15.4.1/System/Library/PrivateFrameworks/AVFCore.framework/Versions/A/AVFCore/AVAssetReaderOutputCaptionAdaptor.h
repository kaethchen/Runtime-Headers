@class AVAssetReaderTrackOutput, AVAssetReaderOutputCaptionAdaptorInternal;
@protocol AVAssetReaderCaptionValidationHandling;

@interface AVAssetReaderOutputCaptionAdaptor : NSObject <AVAssetReaderOutputAdaptor> {
    AVAssetReaderOutputCaptionAdaptorInternal *_internal;
}

@property (weak) id<AVAssetReaderCaptionValidationHandling> validationDelegate;
@property (readonly, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;

+ (id)assetReaderOutputCaptionAdaptorWithAssetReaderTrackOutput:(id)a0;

- (void)dealloc;
- (id)initWithAssetReaderTrackOutput:(id)a0;
- (id)_readSampleBuffersAndReturnAVCaption;
- (int)addExtractionForOutput:(id)a0 figAssetReader:(struct OpaqueFigAssetReader { } *)a1 options:(id)a2 withOutputExtactionID:(int *)a3;
- (void)appendOutputCaptionGroup:(id)a0;
- (id)captionsNotPresentInPreviousGroupsInCaptionGroup:(id)a0;
- (id)nextCaptionGroup;
- (id)pairedAVCaptionForFigCaption:(struct OpaqueFigCaption { } *)a0;
- (void)setFigCaptionToAVCaptionMapping:(struct __CFDictionary { } *)a0;

@end
