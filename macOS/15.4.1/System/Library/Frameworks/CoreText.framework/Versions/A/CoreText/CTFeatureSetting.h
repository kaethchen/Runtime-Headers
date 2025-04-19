@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;

@end
