@interface RBSCPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grant;
+ (id)grantUserInitiated;
+ (id)grantWithRole:(unsigned char)a0;
+ (id)grantWithUserInteractivity;
+ (id)grantWithUserInteractivityAndFocus;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
