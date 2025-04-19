@interface AXEMouseEvent : NSObject <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) long long clickState;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) struct CGPoint { double x; double y; } delta;
@property (nonatomic) struct CGPoint { double x; double y; } scrollWheelDelta;
@property (nonatomic) BOOL isScrollWheelEventContinuous;
@property (nonatomic) unsigned int scrollMomentumPhase;
@property (nonatomic) BOOL isMoveEvent;
@property (nonatomic) BOOL isDragEvent;
@property (nonatomic) BOOL isLeftButtonDown;
@property (nonatomic) BOOL isRightButtonDown;
@property (nonatomic) BOOL isOtherButtonDown;
@property (nonatomic) BOOL isSynthesized;

+ (id)eventFromCGEvent:(struct __CGEvent { } *)a0;
+ (BOOL)isMouseEvent:(struct __CGEvent { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
