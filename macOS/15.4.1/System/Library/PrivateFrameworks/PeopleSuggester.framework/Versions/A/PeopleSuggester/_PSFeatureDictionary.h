@class NSMutableDictionary;

@interface _PSFeatureDictionary : NSMutableDictionary {
    NSMutableDictionary *_timeBuckets;
    NSMutableDictionary *_unoptimizedValues;
    unsigned long long _count;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)addEntriesFromDictionary:(id)a0 overwrite:(BOOL)a1;
- (void)addFeatureWithIntValue:(id)a0 doubleValue:(id)a1 stringValue:(id)a2 boolValue:(id)a3 timeBucket:(int)a4 forKey:(id)a5;

@end
