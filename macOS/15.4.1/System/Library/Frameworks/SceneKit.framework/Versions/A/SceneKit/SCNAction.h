@interface SCNAction : NSObject <NSCopying, NSSecureCoding> {
    struct SCNCAction { void /* function */ **x0; double x1; id /* block */ x2; id x3; BOOL x4; double x5; double x6; double x7; double x8; double x9; BOOL x10; BOOL x11; id /* block */ x12; struct __CFString *x13; long long x14; double x15; double x16; double x17; double x18; } *_caction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;
@property (nonatomic) long long timingMode;
@property (nonatomic) id /* block */ timingFunction;
@property (nonatomic) double speed;

+ (id)hide;
+ (id)unhide;
+ (id)sequence:(id)a0;
+ (id)removeFromParentNode;
+ (id)runBlock:(id /* block */)a0;
+ (id)runBlock:(id /* block */)a0 queue:(id)a1;
+ (id)actionNamed:(id)a0;
+ (id)customActionWithDuration:(double)a0 actionBlock:(id /* block */)a1;
+ (BOOL)editingModeEnabled;
+ (id)fadeInWithDuration:(double)a0;
+ (id)fadeOpacityBy:(double)a0 duration:(double)a1;
+ (id)fadeOpacityTo:(double)a0 duration:(double)a1;
+ (id)fadeOutWithDuration:(double)a0;
+ (id)group:(id)a0;
+ (id)javaScriptActionWithScript:(id)a0 duration:(double)a1;
+ (id)moveBy:(struct SCNVector3 { double x0; double x1; double x2; })a0 duration:(double)a1;
+ (id)moveByX:(double)a0 y:(double)a1 z:(double)a2 duration:(double)a3;
+ (id)moveTo:(struct SCNVector3 { double x0; double x1; double x2; })a0 duration:(double)a1;
+ (id)performSelector:(SEL)a0 onTarget:(id)a1;
+ (id)playAudioSource:(id)a0 waitForCompletion:(BOOL)a1;
+ (id)repeatAction:(id)a0 count:(unsigned long long)a1;
+ (id)repeatActionForever:(id)a0;
+ (id)rotateByAngle:(double)a0 aroundAxis:(struct SCNVector3 { double x0; double x1; double x2; })a1 duration:(double)a2;
+ (id)rotateByX:(double)a0 y:(double)a1 z:(double)a2 duration:(double)a3;
+ (id)rotateToAxisAngle:(struct SCNVector4 { double x0; double x1; double x2; double x3; })a0 duration:(double)a1;
+ (id)rotateToX:(double)a0 y:(double)a1 z:(double)a2 duration:(double)a3;
+ (id)rotateToX:(double)a0 y:(double)a1 z:(double)a2 duration:(double)a3 shortestUnitArc:(BOOL)a4;
+ (id)runAction:(id)a0 onChildNodeWithName:(id)a1;
+ (id)scaleBy:(double)a0 duration:(double)a1;
+ (id)scaleTo:(double)a0 duration:(double)a1;
+ (void)setEditingModeEnabled:(BOOL)a0;
+ (id)waitForDuration:(double)a0;
+ (id)waitForDuration:(double)a0 withRange:(double)a1;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setKey:(id)a0;
- (BOOL)finished;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)setFinished:(BOOL)a0;
- (id)parameters;
- (BOOL)isCustom;
- (BOOL)isRelative;
- (struct SCNCAction { void /* function */ **x0; double x1; id /* block */ x2; id x3; BOOL x4; double x5; double x6; double x7; double x8; double x9; BOOL x10; BOOL x11; id /* block */ x12; struct __CFString *x13; long long x14; double x15; double x16; double x17; double x18; } *)caction;
- (double)durationRange;
- (double)ratioForTime:(double)a0;
- (id)reversedAction;
- (void)setCppAction:(void *)a0;
- (void)setDurationRange:(double)a0;
- (void)timeJumpWithTarget:(id)a0 timeOffset:(double)a1;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;
- (void)wasAddedToTarget:(id)a0 atTime:(double)a1;
- (void)wasPausedWithTarget:(id)a0 atTime:(double)a1;
- (void)wasRemovedFromTarget:(id)a0 atTime:(double)a1;
- (void)willResumeWithTarget:(id)a0 atTime:(double)a1;
- (void)willStartWithTarget:(id)a0 atTime:(double)a1;

@end
