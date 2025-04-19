@interface GKDashboardPresentationController : NSObject

@property (nonatomic) BOOL presenting;
@property (nonatomic) double transitionDuration;

+ (void)dismissViewController:(id)a0 animated:(BOOL)a1;
+ (void)presentViewController:(id)a0 presentingViewController:(id)a1 animated:(BOOL)a2;

- (id)init;

@end
