@interface RBSJetsamPriorityGrant : RBSGrant

@property (readonly, nonatomic) unsigned long long band;

+ (id)grantWithBackgroundPriority;
+ (id)grantWithBand:(unsigned long long)a0;
+ (id)grantWithForegroundPriority;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
