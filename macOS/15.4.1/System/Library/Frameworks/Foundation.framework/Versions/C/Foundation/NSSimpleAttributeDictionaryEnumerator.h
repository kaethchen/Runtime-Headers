@class NSSimpleAttributeDictionary;

@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {
    NSSimpleAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithAttributeDictionary:(id)a0;

@end
