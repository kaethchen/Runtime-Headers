@class NSString;

@interface RBSTagAttribute : RBSAttribute

@property (readonly, copy, nonatomic) NSString *tag;

+ (id)attributeWithTag:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
