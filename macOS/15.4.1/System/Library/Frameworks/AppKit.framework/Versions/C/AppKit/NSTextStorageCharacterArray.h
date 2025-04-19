@class NSTextStorage;

@interface NSTextStorageCharacterArray : NSArray {
    NSTextStorage *_container;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithContainer:(id)a0;

@end
