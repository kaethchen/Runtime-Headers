@class MLPredictionSyncPoint, NSString, NSDictionary, NSArray;

@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long parentSignpostID;
@property (readonly, nonatomic) BOOL hasDirectBindingExpectations;
@property unsigned long long classifyTopK;
@property (readonly, nonatomic) BOOL predictionUsesCPU;
@property (copy, nonatomic) NSDictionary *automaticOutputBackingMode;
@property unsigned long long maxComputationBatchSize;
@property (retain, nonatomic) NSString *e5rtStreamReuseExpectation;
@property (nonatomic) BOOL enablePixelBufferDirectBinding;
@property (copy, nonatomic) NSDictionary *inputDirectBindingExpectations;
@property (copy, nonatomic) NSDictionary *outputDirectBindingExpectations;
@property (copy, nonatomic) NSArray *waitSyncPoints;
@property (retain, nonatomic) MLPredictionSyncPoint *completionSyncPoint;
@property (nonatomic) unsigned int aneQoS;
@property (nonatomic) NSString *aneExecutionPriority;
@property (nonatomic) BOOL usesCPUOnly;
@property (copy, nonatomic) NSDictionary *outputBackings;

+ (id)defaultOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_validateDirectBindingExpectations:(id)a0 directlyBoundFeatureNames:(id)a1 unexpectedDirectBindings:(id *)a2 unexpectedCopyBindings:(id *)a3;
- (id)initWithUsesCPUOnly:(BOOL)a0;
- (BOOL)validateExpectationsWithDirectlyBoundInputs:(id)a0 outputs:(id)a1 error:(id *)a2;

@end
