@class NSString, OFNSView, CAAnimation;

@interface OKWidgetContentEffect : NSObject <OKSettingsSupport> {
    NSString *_uuid;
    BOOL _isPaused;
    double _animationStartTime;
}

@property (nonatomic) OFNSView *animatedView;
@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL autoplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationKeyPrefix;
+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (double)animationDuration;
- (BOOL)isAnimating;
- (void)stopAnimation;
- (id)initWithSettings:(id)a0;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (double)animationBeginTime;
- (double)animationCurrentTime;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingObjectForKey:(id)a0;
- (void)startAnimationWithView:(id)a0;

@end
