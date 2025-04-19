@class NSArray, NSString;

@interface HKPHQ9Assessment : HKScoredAssessment <_HKScoredRiskAssessment>

@property (readonly, copy, nonatomic) NSArray *answers;
@property (readonly, nonatomic) long long risk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (long long)_riskForAnswers:(id)a0;
+ (long long)_scoreForAnswers:(id)a0;
+ (id)assessmentWithDate:(id)a0 answers:(id)a1;
+ (id)assessmentWithDate:(id)a0 answers:(id)a1 metadata:(id)a2;
+ (BOOL)supportsEquivalence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (long long)hk_integerValue;
- (void)_setAnswers:(id)a0;
- (void)_setRisk:(long long)a0;
- (void)_validateAnswers:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithDate:(id)a0 answers:(id)a1 metadata:(id)a2;

@end
