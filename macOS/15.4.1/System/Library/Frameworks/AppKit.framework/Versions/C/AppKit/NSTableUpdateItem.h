@interface NSTableUpdateItem : NSObject {
    unsigned long long _rowAnimation;
    long long _originalRow;
}

- (id)description;
- (id)initWithRowAnimation:(unsigned long long)a0;

@end
