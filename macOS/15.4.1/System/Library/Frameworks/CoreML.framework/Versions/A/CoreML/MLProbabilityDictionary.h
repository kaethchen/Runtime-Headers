@class MLProbabilityDictionarySharedKeySet;
@protocol MLProbabilityDictionaryStorage;

@interface MLProbabilityDictionary : NSDictionary

@property (readonly) MLProbabilityDictionarySharedKeySet *labelIndexMap;
@property (readonly) id<MLProbabilityDictionaryStorage> storage;

+ (id)sharedKeySetForLabels:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)classLabelOfMaxProbability;
- (id)initWithLabelIndexMap:(id)a0 storage:(id)a1;
- (id)initWithLabels:(id)a0 probabilities:(const double *)a1;
- (id)initWithLabels:(id)a0 probabilityArray:(id)a1;
- (id)initWithSharedKeySet:(id)a0 probabilities:(const double *)a1;
- (id)initWithSharedKeySet:(id)a0 probabilityArray:(id)a1;
- (id)initWithSharedKeySet:(id)a0 probabilityMultiArray:(id)a1;

@end
