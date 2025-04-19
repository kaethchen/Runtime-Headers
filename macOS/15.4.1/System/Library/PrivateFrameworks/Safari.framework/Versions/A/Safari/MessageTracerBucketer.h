@interface MessageTracerBucketer : NSObject

+ (unsigned long long)_bucketedDuplicateCountForDuplicatecount:(unsigned long long)a0 upperBound:(unsigned long long)a1;
+ (unsigned long long)bucketedDuplicateCountForAggregrateDuplicateCount:(unsigned long long)a0;
+ (unsigned long long)bucketedDuplicateCountForTopLevelDuplicateCount:(unsigned long long)a0;

@end
