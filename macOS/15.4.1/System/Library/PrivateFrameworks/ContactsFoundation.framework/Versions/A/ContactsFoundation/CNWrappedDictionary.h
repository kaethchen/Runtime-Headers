@class NSDictionary;

@interface CNWrappedDictionary : NSDictionary {
    NSDictionary *_underlyingDictionary;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithDictionary:(id)a0;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;

@end
