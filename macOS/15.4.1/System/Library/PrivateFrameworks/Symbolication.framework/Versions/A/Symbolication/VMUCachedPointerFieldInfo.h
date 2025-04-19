@class VMUFieldInfo;

@interface VMUCachedPointerFieldInfo : NSObject {
    unsigned int _leafOffsetInRootField;
    VMUFieldInfo *_rootField;
    VMUFieldInfo *_leafField;
}

- (void).cxx_destruct;
- (id)initWithRootField:(id)a0 leafField:(id)a1 leafOffsetInRootField:(unsigned int)a2;

@end
