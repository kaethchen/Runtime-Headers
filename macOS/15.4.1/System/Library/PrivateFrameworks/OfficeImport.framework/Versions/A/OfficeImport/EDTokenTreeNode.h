@interface EDTokenTreeNode : NSObject {
    unsigned int mTokenIndex;
    int mTokenType;
    EDTokenTreeNode *mFirstChild;
    EDTokenTreeNode *mSibling;
}

+ (id)tokenTreeNodeWithIndexAndType:(unsigned int)a0 type:(int)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)firstChild;
- (id)sibling;
- (id)initWithIndexAndType:(unsigned int)a0 type:(int)a1;
- (void)setFirstChild:(id)a0;
- (void)setSibling:(id)a0;
- (unsigned int)tokenIndex;

@end
