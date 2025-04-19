@class PXStoryViewChromeTitleConfiguration;
@protocol PXStoryViewLayoutSpec;

@interface PXStoryViewLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) id<PXStoryViewLayoutSpec> viewLayoutSpec;
@property (nonatomic) unsigned long long storyConfigurationOptions;
@property (retain, nonatomic) PXStoryViewChromeTitleConfiguration *customGeneralChromeTitleConfiguration;

- (void).cxx_destruct;
- (id)createSpec;
- (Class)specClass;

@end
