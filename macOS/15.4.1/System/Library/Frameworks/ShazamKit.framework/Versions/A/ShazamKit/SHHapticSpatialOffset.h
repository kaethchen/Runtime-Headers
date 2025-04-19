@interface SHHapticSpatialOffset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timestamp;
@property (readonly) double offset;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0 offset:(double)a1;

@end
