@class NSString;

@interface _DPPrioPlusPlusMetadataValueRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) unsigned long long p;
@property (readonly, nonatomic) BOOL dynamicVectorSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomizerWithEpsilon:(double)a0 dimensionality:(unsigned long long)a1 dynamicVectorSize:(BOOL)a2;

- (id)init;
- (id)initWithEpsilon:(double)a0 dimensionality:(unsigned long long)a1 dynamicVectorSize:(BOOL)a2;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)randomizeBitVector:(id)a0 metadata:(id)a1;
- (id)randomizeBitVectors:(id)a0 forKey:(id)a1;
- (id)randomizeBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;

@end
