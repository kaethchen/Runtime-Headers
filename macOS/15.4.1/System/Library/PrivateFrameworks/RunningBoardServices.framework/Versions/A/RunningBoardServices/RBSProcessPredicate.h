@class NSString, RBSProcessPredicateImpl, RBSProcessIdentity;

@interface RBSProcessPredicate : NSObject <RBSXPCSecureCoding, RBSProcessMatching>

@property (readonly, nonatomic) unsigned int euid;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionPoint;
@property (readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, nonatomic) RBSProcessPredicateImpl *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicate;
+ (id)predicateMatchingIdentifier:(id)a0;
+ (id)predicateMatchingIdentifiers:(id)a0;
+ (id)predicateMatchingSuspendableProcesses;
+ (id)predicateForClearTheBoard;
+ (id)predicateForMemoryMonitor;
+ (id)predicateForSymptomsd;
+ (id)predicateMatching:(id)a0;
+ (id)predicateMatchingAnyPredicate:(id)a0;
+ (id)predicateMatchingAuid:(unsigned int)a0;
+ (id)predicateMatchingBeforeTranslocationBundlePath:(id)a0;
+ (id)predicateMatchingBundleIdentifier:(id)a0;
+ (id)predicateMatchingBundleIdentifiers:(id)a0;
+ (id)predicateMatchingDextsBundledWithBundleID:(id)a0;
+ (id)predicateMatchingEuid:(unsigned int)a0;
+ (id)predicateMatchingExecPathStartsWith:(id)a0;
+ (id)predicateMatchingExtensionPoint:(id)a0;
+ (id)predicateMatchingHandle:(id)a0;
+ (id)predicateMatchingHostIdentifier:(id)a0;
+ (id)predicateMatchingIdentity:(id)a0;
+ (id)predicateMatchingJobLabel:(id)a0;
+ (id)predicateMatchingLSApplicationIdentity:(id)a0;
+ (id)predicateMatchingLaunchServicesProcesses;
+ (id)predicateMatchingPlatform:(int)a0;
+ (id)predicateMatchingPredicates:(id)a0;
+ (id)predicateMatchingProcessTypeApplication;
+ (id)predicateMatchingServiceName:(id)a0;
+ (id)predicateMatchingTarget:(id)a0;
+ (id)predicateNotMatchingPredicate:(id)a0;
+ (id)predicatePowerLogProcesses;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)processIdentifier;
- (id)initWithPredicate:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (unsigned int)auid;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processIdentifiers;
- (id)processPredicate;

@end
