@class AVAssetReaderTrackOutput, AVAssetReader, SCMLVideoAnalysisConfiguration;

@interface SCMLVideoDecoder : NSObject

@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *assetReaderTrack;
@property (nonatomic) unsigned long long frameLimit;
@property (nonatomic) unsigned long long framesPerSync;
@property (nonatomic) unsigned long long currentFrameIndex;
@property (nonatomic) double durationInSeconds;
@property (nonatomic) double totalFrames;
@property (retain, nonatomic) SCMLVideoAnalysisConfiguration *config;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithConfig:(id)a0;
- (unsigned long long)maxNumFrames;
- (id)nextFrameWithError:(id *)a0;
- (BOOL)startDecodingVideoURL:(id)a0 error:(id *)a1;
- (BOOL)useKeyFrame;

@end
