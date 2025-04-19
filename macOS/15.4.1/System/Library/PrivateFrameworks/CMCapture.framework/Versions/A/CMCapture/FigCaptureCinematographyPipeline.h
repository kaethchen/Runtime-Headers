@class BWRealtimeCinematographyNode, NSString, BWSmartStyleLearningNode, BWVideoDepthNode;

@interface FigCaptureCinematographyPipeline : FigCapturePipeline {
    BWVideoDepthNode *_videoDepthNode;
    BWRealtimeCinematographyNode *_cinematographyNode;
    BWSmartStyleLearningNode *_smartStyleLearningNode;
    NSString *_sourceID;
}

+ (void)initialize;

- (void)dealloc;

@end
