@class NSDictionary, NSEnumerator;

@interface CMIDictionaryWithDefaultDictEnumerator : NSEnumerator

@property (readonly) NSDictionary *mainDict;
@property (readonly) NSEnumerator *mainDictEnumerator;
@property (readonly) NSEnumerator *defaultDictEnumerator;

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithMainDict:(id)a0 defaultDict:(id)a1;

@end
