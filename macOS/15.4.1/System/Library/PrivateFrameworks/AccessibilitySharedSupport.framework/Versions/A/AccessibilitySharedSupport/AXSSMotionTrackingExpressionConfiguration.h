@class NSDictionary, NSMutableDictionary;

@interface AXSSMotionTrackingExpressionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *_facialExpressionToSensitivity;
@property (readonly, copy, nonatomic) NSDictionary *plistDictionary;

+ (BOOL)_expressionIsActive:(unsigned long long)a0 usingExclaveOutput:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })a1 expressionConfiguration:(id)a2;
+ (unsigned long long)_activationForFacialExpression:(unsigned long long)a0 usingExclaveExpressions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })a1;
+ (id)_defaultSensitivitiesForAllFacialExpressions;
+ (id)_facialExpressionToSensitivityToValueMapping;
+ (BOOL)_jawOpenStartingWithValue:(float)a0 mouthClose:(float)a1 expressionConfiguration:(id)a2;
+ (float)_minConfidenceExpressionStarted:(unsigned long long)a0 usingExpressionConfiguration:(id)a1;
+ (id)_populateExpressionArraysForProcessedExpressions:(id)a0 previousExpressions:(id)a1 startExpressionsOutSet:(id *)a2 endExpressionsOutSet:(id *)a3;
+ (struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; })convertIncomingExpressionsToExclaveBlendshapesOutput:(id)a0;
+ (id)defaultExpressionConfiguration;
+ (id)processExclaveDetectedExpressions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })a0 previousExpressions:(id)a1 expressionConfiguration:(id)a2 startExpressionsOutSet:(id *)a3 endExpressionsOutSet:(id *)a4;
+ (id)processIncomingExpressions:(id)a0 previousExpressions:(id)a1 expressionConfiguration:(id)a2 startExpressionsOutSet:(id *)a3 endExpressionsOutSet:(id *)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlistDictionary:(id)a0;
- (unsigned long long)sensitivityForFacialExpression:(unsigned long long)a0;
- (void)_safelySetSensitivity:(unsigned long long)a0 forFacialExpression:(unsigned long long)a1 inDictionary:(id)a2;
- (BOOL)isEqualToMotionTrackingExpressionConfiguration:(id)a0;
- (void)setSensitivity:(unsigned long long)a0 forFacialExpression:(unsigned long long)a1;

@end
