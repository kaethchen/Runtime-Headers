@class NSMutableArray;

@interface ODDLayoutObjectList : ODDLayoutObject {
    NSMutableArray *mChildren;
}

- (id)init;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (id)children;

@end
