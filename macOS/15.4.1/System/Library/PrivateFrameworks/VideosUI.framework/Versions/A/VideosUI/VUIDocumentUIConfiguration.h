@class NSString;

@interface VUIDocumentUIConfiguration : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *viewControllerIdentifier;
@property (copy, nonatomic) NSString *viewControllerDocumentIdentifier;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property (nonatomic, getter=isNavigationBarAdjustedToSizeClass) BOOL navigationBarAdjustedToSizeClass;
@property (nonatomic, getter=isInteractivePopGestureAllowed) BOOL isInteractivePopGestureAllowed;
@property (copy, nonatomic) NSString *loadingViewText;
@property (nonatomic, getter=prefersLargeTitle) BOOL prefersLargeTitle;
@property (copy, nonatomic) NSString *navigationTitle;
@property (nonatomic, getter=isComingFromExtras) BOOL isComingFromExtras;
@property (nonatomic, getter=isComingFromRoot) BOOL isComingFromRoot;
@property (nonatomic) BOOL shouldWrapModalInNavigationController;

+ (struct CGSize { double x0; double x1; })_preferredSizeFromConfig:(id)a0;
+ (long long)_presentationTypeFromString:(id)a0;
+ (id)uiConfigurationWithDict:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
