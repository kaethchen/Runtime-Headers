@class NSDate;
@protocol NSObject, NSCopying;

@interface AXETrackingTouchEvent : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *touchStartTimestamp;
@property (nonatomic) unsigned long long phase;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedLocation;
@property (readonly, nonatomic) id<NSObject, NSCopying> identity;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;

+ (id)touchFromNSTouch:(id)a0 timestamp:(id)a1 touchStartTimestamp:(id)a2 contextOrigin:(struct CGPoint { double x0; double x1; })a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_nameOfPhase:(unsigned long long)a0;
- (id)initWithIdentity:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 normalizedLocation:(struct CGPoint { double x0; double x1; })a2 phase:(unsigned long long)a3 timestamp:(id)a4 touchStartTimestamp:(id)a5;

@end
