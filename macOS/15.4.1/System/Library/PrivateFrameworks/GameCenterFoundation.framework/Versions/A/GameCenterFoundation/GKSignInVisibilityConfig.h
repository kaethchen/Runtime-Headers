@class GKLimitedPresentationConfig;

@interface GKSignInVisibilityConfig : NSObject

@property (retain, nonatomic) GKLimitedPresentationConfig *sheetConfig;
@property (retain, nonatomic) GKLimitedPresentationConfig *bannerConfig;

- (id)init;
- (void).cxx_destruct;

@end
