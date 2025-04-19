@class NSObject, AXMDisplay;
@protocol OS_dispatch_queue;

@interface AXMDisplayManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AXMDisplay *_queue_CoreAnimationMainDisplay;
    AXMDisplay *_queue_FrontBoardMainDisplay;
    BOOL _initialized;
}

@property (nonatomic) double mobileGestaltOrientation;
@property (readonly, nonatomic) AXMDisplay *frontBoardMainDisplay;
@property (readonly, nonatomic) AXMDisplay *coreAnimationMainDisplay;
@property (readonly, nonatomic) BOOL isInitialized;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (long long)_discreteOrientationForOrientation:(double)a0;
- (id)_displayPropertiesFromMobileGestalt;
- (id)initAndWaitForMainDisplayConfiguration;

@end
