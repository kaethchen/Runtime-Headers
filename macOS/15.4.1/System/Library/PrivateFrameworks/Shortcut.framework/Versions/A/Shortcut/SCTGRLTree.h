@class NSString, NSMutableArray, SCTGRL;

@interface SCTGRLTree : NSObject {
    NSString *mKey;
    SCTGRL *mGRL;
    NSMutableArray *mChildren;
    SCTGRLTree *mParent;
}

- (void)dealloc;
- (id)init;
- (id)parent;
- (id)initWithKey:(id)a0;
- (id)key;
- (id)setKey:(id)a0;
- (id)addChild:(id)a0;
- (id)children;
- (id)setParent:(id)a0;
- (id)toString;
- (id)setGRL:(id)a0;
- (void)addGRLToTree:(id)a0;
- (id)grl;
- (void)addGRLsInGRLIndex:(id)a0;
- (id)childWithKey:(id)a0;
- (id)initRootWithKey:(id)a0 withGRLIndex:(id)a1;
- (id)newChildWithKey:(id)a0;

@end
