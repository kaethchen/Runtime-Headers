@class CMAttitude;

@interface CMDisplayGravity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { double x; double y; double z; } gravity;
@property (readonly, nonatomic) CMAttitude *attitude;
@property (readonly, nonatomic) double timestamp;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayGravity:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; })a0 timestamp:(double)a1;

@end
