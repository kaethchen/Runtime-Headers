@class MLMultiArray;

@interface MLProbabilityDictionaryMultiArrayStorage : NSObject <MLProbabilityDictionaryStorage> {
    MLMultiArray *_multiArray;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)maxElementIndex;
- (id)initWithMultiArray:(id)a0;
- (id)probabilityAtIndex:(unsigned long long)a0;

@end
