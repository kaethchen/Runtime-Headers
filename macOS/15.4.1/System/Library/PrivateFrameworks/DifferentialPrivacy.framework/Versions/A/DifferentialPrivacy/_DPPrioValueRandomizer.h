@class NSDictionary, NSString;

@interface _DPPrioValueRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) unsigned long long p;
@property (readonly, nonatomic) BOOL dynamicVectorSize;
@property (readonly, nonatomic) double defaultLocalEpsilon;
@property (readonly, nonatomic) NSDictionary *plistParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomizerWithEpsilon:(double)a0 parameters:(id)a1;
+ (id)shouldForwardToDelegateWithMetadata:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)delegateMetadataFromMetadata:(id)a0;
- (id)delegateRandomizer;
- (id)initWithEpsilon:(double)a0 parameters:(id)a1;
- (id)randomize:(id)a0 withLocalEpsilon:(double)a1 metadata:(id)a2;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)randomizeBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)randomizeVector:(id)a0 withLocalEpsilon:(double)a1 metadata:(id)a2;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;

@end
