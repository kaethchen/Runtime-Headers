@class NSArray;

@interface PLVideoStreamingResourceChoiceOptimizer : NSObject {
    NSArray *_videoResources;
    NSArray *_streamableVideos;
}

@property (readonly, nonatomic) NSArray *preferredVideoResources;

- (void).cxx_destruct;
- (id)initWithVideoResources:(id)a0;

@end
