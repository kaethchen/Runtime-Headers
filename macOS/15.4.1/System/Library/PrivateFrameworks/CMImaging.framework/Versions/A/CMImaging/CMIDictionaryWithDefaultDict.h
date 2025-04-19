@class NSDictionary;

@interface CMIDictionaryWithDefaultDict : NSDictionary {
    unsigned long long _count;
    BOOL _countEvaluated;
}

@property (readonly) NSDictionary *mainDict;
@property (readonly) NSDictionary *defaultDict;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)initWithMainDict:(id)a0 defaultDict:(id)a1;

@end
