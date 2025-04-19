@class NSMutableArray, ODDTransitionPoint;

@interface ODDNodePoint : ODDDataPoint {
    ODDNodePoint *mParent;
    NSMutableArray *mChildren;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}

- (void).cxx_destruct;
- (void)setType:(int)a0;
- (id)parent;
- (id)children;
- (void)addChild:(id)a0 order:(unsigned long long)a1;
- (id)parentTransition;
- (void)setParentTransition:(id)a0;
- (void)setSiblingTransition:(id)a0;
- (id)siblingTransition;

@end
