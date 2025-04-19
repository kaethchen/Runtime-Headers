@class NSDictionary, NSString;

@interface _DPPINERandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) double maxCentralEpsilon;
@property (readonly, copy, nonatomic) NSDictionary *plistParameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (BOOL)isValidCentralEpsilon:(double)a0 plistParameter:(id)a1;
+ (id)randomizerWithMaxCentralEpsilon:(double)a0 parameters:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)addNoiseToData:(id)a0 metadata:(id)a1;
- (id)auditedMetadata:(id)a0;
- (id)initWithMaxCentralEpsilon:(double)a0 parameter:(id)a1;
- (BOOL)isDPMechanismNoneForMetadata:(id)a0;
- (id)pineParameterWithMetadata:(id)a0;
- (id)randomizeFloatVector:(id)a0 metadata:(id)a1;
- (id)randomizeFloatVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)recordWithShardResult:(id)a0 noisedVector:(id)a1 metadata:(id)a2 key:(id)a3;

@end
