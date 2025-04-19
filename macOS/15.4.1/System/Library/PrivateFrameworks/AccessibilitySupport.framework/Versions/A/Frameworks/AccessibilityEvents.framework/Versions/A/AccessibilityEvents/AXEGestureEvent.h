@interface AXEGestureEvent : NSObject <NSCopying>

@property (nonatomic) BOOL isGestureEvent;
@property (nonatomic) BOOL isDockControl;
@property (nonatomic) BOOL isFluidTouchGesture;
@property (nonatomic) unsigned long long hidEventType;
@property (nonatomic) double gestureProgress;
@property (nonatomic) double zoomValue;
@property (nonatomic) double zoomDeltaX;
@property (nonatomic) double zoomDeltaY;
@property (nonatomic) double rotationValue;
@property (nonatomic) double scrollX;
@property (nonatomic) double scrollY;
@property (nonatomic) double scrollZ;
@property (nonatomic) double swipeProgress;
@property (nonatomic) double swipePositionX;
@property (nonatomic) double swipePositionY;
@property (nonatomic) double swipeVelocityX;
@property (nonatomic) double swipeVelocityY;
@property (nonatomic) double swipeVelocityZ;
@property (nonatomic) double eventContextOriginX;
@property (nonatomic) double eventContextOriginY;
@property (nonatomic) long long symbolicHotKeyValue;
@property (nonatomic) BOOL symbolicHotKeyTreatAsKeyDown;

+ (BOOL)isGestureEvent:(struct __CGEvent { } *)a0;
+ (id)eventFromCGEvent:(struct __CGEvent { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
