@class NSString;

@interface RBSEndowmentLink : NSObject <NSCopying, RBSXPCSecureCoding>

@property (readonly, nonatomic) NSString *endowmentNamespace;
@property (readonly, nonatomic) NSString *sourceEnvironment;
@property (readonly, nonatomic) int sourcePid;
@property (readonly, nonatomic) NSString *targetEnvironment;
@property (readonly, nonatomic) int targetPid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endowmentLinkForNamespace:(id)a0 sourceEnvironment:(id)a1 sourcePid:(int)a2 targetEnvironment:(id)a3 targetPid:(int)a4;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
