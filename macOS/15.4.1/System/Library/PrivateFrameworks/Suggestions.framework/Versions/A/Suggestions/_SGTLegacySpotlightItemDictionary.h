@class NSDictionary;

@interface _SGTLegacySpotlightItemDictionary : NSDictionary {
    struct __MDQuery { } *query;
    long long index;
    NSDictionary *collectedAttributes;
}

- (id)allKeys;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (void)setIndex:(unsigned long long)a0;
- (id)valueForAttribute:(id)a0;
- (id)initWithQuery:(struct __MDQuery { } *)a0;

@end
