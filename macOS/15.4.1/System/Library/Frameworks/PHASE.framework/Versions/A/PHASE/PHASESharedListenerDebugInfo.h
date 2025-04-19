@interface PHASESharedListenerDebugInfo : PHASESharedEntityDebugInfo

@property (readonly, nonatomic) float gain;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setGain:(float)a0;

@end
