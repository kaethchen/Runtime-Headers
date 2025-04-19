@class NSDictionary;

@interface _NSStackOverlayDictionary : NSDictionary {
    NSDictionary *_base;
    NSDictionary *_overlay;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)initWithBase:(id)a0 overlay:(id)a1;

@end
