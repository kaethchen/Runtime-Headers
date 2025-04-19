@class NSArray, NSString;

@interface HKStateOfMind : HKSample <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setKind:) long long kind;
@property (nonatomic, setter=_setValence:) double valence;
@property (copy, nonatomic, setter=_setLabels:) NSArray *labels;
@property (copy, nonatomic, setter=_setAssociations:) NSArray *associations;
@property (readonly, nonatomic) long long reflectiveInterval;
@property (readonly, copy, nonatomic) NSArray *domains;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, nonatomic) long long valenceClassification;

+ (id)validateLabels:(id)a0;
+ (BOOL)_isConcreteObjectClass;
+ (id)stateOfMindWithDate:(id)a0 kind:(long long)a1 valence:(double)a2 labels:(id)a3 associations:(id)a4;
+ (id)stateOfMindWithDate:(id)a0 kind:(long long)a1 valence:(double)a2 labels:(id)a3 associations:(id)a4 context:(id)a5 metadata:(id)a6;
+ (id)stateOfMindWithDate:(id)a0 kind:(long long)a1 valence:(double)a2 labels:(id)a3 associations:(id)a4 metadata:(id)a5;
+ (id)stateOfMindWithDate:(id)a0 reflectiveInterval:(long long)a1 valence:(double)a2 labels:(id)a3 domains:(id)a4 context:(id)a5 metadata:(id)a6;
+ (id)stateOfMindWithDate:(id)a0 reflectiveInterval:(long long)a1 valence:(double)a2 labels:(id)a3 domains:(id)a4 metadata:(id)a5;
+ (BOOL)supportsEquivalence;
+ (id)validateArgumentsWithKind:(long long)a0 valence:(double)a1;
+ (id)validateArgumentsWithKind:(long long)a0 valence:(double)a1 labels:(id)a2 associations:(id)a3;
+ (id)validateAssociations:(id)a0;
+ (id)validateKind:(long long)a0;
+ (id)validateValence:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)_setContext:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (BOOL)_validateForSavingWithClientEntitlements:(id)a0 applicationSDKVersionToken:(unsigned long long)a1 isAppleWatch:(BOOL)a2 error:(id *)a3;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)hasAnyUnknownDomain;
- (BOOL)hasAnyUnknownLabel;
- (id)sanitizedSample:(id)a0 forEntitlements:(id)a1;

@end
