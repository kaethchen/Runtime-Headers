@class NSArray, NSDictionary, NSEnumerator;

@interface _PSFeatureDictionaryEnumerator : NSEnumerator {
    NSArray *_timeBucketsArray;
    NSDictionary *_timeBuckets;
    NSDictionary *_otherValues;
    unsigned long long _i;
    NSEnumerator *_keyEnumerator;
    BOOL _loadedOtherValuesEnumerator;
}

- (id)init;
- (void).cxx_destruct;
- (id)allObjects;
- (id)nextObject;

@end
