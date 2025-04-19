@class NSString;

@interface RBSProcessIdentifier : NSObject <RBSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding, NSCopying> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierForCurrentProcess;
+ (id)identifierWithPid:(int)a0;
+ (id)identifierForIdentifier:(id)a0;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (int)rbs_pid;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithPid:(int)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;

@end
