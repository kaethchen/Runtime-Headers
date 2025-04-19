@class AVMediaFileType, NSArray, NSURL, NSString;
@protocol AVAssetWriterDataWritingDelegate, AVAssetWriterDelegate;

@interface AVAssetWriterConfigurationState : NSObject

@property (copy, nonatomic) NSURL *URL;
@property (weak, nonatomic) id<AVAssetWriterDataWritingDelegate> dataWritingDelegate;
@property (weak) id<AVAssetWriterDelegate> delegate;
@property (copy, nonatomic) AVMediaFileType *mediaFileType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } initialMovieFragmentInterval;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } overallDurationHint;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (copy, nonatomic) NSArray *metadataItems;
@property (nonatomic) int movieTimeScale;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) float preferredRate;
@property (nonatomic) long long singlePassFileSize;
@property (nonatomic) long long singlePassMediaDataSize;
@property (copy, nonatomic) NSArray *inputs;
@property (copy, nonatomic) NSArray *inputGroups;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredOutputSegmentInterval;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } initialSegmentStartTime;
@property (copy, nonatomic) NSString *outputFileTypeProfile;
@property (nonatomic) long long initialMovieFragmentSequenceNumber;
@property (nonatomic) BOOL producesCombinableFragments;
@property (copy, nonatomic) NSArray *contentProtectionConfigurations;

- (void)dealloc;
- (void).cxx_destruct;

@end
