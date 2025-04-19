@class NSHashTable;

@interface _NSSelectorSet : NSObject {
    NSHashTable *_hash;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsSelector:(SEL)a0;
- (id)initWithHash:(id)a0;
- (id)initWithSelectors:(SEL)a0;

@end
