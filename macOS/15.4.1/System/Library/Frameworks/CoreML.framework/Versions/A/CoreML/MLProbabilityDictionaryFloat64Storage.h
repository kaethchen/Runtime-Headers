@class NSData;

@interface MLProbabilityDictionaryFloat64Storage : NSObject <MLProbabilityDictionaryStorage> {
    NSData *_data;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)maxElementIndex;
- (id)initWithFloat64CArray:(const double *)a0 count:(unsigned long long)a1;
- (id)probabilityAtIndex:(unsigned long long)a0;

@end
