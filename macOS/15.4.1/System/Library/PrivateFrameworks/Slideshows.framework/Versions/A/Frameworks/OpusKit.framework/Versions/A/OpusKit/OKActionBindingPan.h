@interface OKActionBindingPan : OKActionBinding

@property (nonatomic) unsigned long long minimumNumberOfTouches;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) BOOL canPanHorizontally;
@property (nonatomic) BOOL canPanVertically;
@property (nonatomic) double directionThreshold;

+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (void)unload;
- (id)initWithSettings:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (void)performActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 translation:(struct CGPoint { double x0; double x1; })a3 velocity:(struct CGPoint { double x0; double x1; })a4 direction:(unsigned long long)a5;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (id)settingObjectForKey:(id)a0;

@end
