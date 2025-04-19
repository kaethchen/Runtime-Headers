@interface AXCenterTapReplayableGesture : AXReplayableGesture

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
