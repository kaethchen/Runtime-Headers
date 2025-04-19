@class AVAssetReaderTrackOutput, NSMutableArray, AVWeakReference;

@interface AVAssetReaderOutputCaptionAdaptorInternal : NSObject {
    AVAssetReaderTrackOutput *trackOutput;
    NSMutableArray *avCaptionGroupOutputQueue;
    struct __CFDictionary { } *figCaptionToAVCaptionMapping;
    struct OpaqueFigCaptionTimelineGenerator { } *sbufToCaptionGroupConverter;
    BOOL endOfStream;
    AVWeakReference *validationDelegate;
}

@end
