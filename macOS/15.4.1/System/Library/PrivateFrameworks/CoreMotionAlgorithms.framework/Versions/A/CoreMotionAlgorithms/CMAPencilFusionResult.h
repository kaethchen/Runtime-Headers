@class NSNumber;

@interface CMAPencilFusionResult : NSObject <NSCopying>

@property (nonatomic) float altitudeAngle;
@property (nonatomic) float azimuthAngle;
@property (nonatomic) float rollAngle;
@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (nonatomic) NSNumber *estimationUpdateIndex;
@property (nonatomic) BOOL estimated;
@property (nonatomic) double timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
