@class NSString;

@interface RBSProcessAssertionInfo : NSObject <NSCopying, RBSXPCSecureCoding>

@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSString *explanation;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isLegacyAssertionReason:(unsigned long long)a0;

@end
