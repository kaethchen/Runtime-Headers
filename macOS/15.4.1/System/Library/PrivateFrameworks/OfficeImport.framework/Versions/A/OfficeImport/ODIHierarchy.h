@class ODIState, NSMutableDictionary;

@interface ODIHierarchy : NSObject {
    int mType;
    int mMaxMappableTreeDepth;
    ODIState *mState;
    NSMutableDictionary *mNodeInfoMap;
}

+ (BOOL)mapIdentifier:(id)a0 state:(id)a1;

- (void).cxx_destruct;
- (void)map;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsOfNode:(id)a0;
- (void)createInfoForNode:(id)a0 depth:(int)a1;
- (id)infoForNode:(id)a0;
- (id)initWithType:(int)a0 state:(id)a1;
- (void)mapLogicalBoundsWithXRanges:(const void *)a0;
- (void)mapNode:(id)a0;
- (void *)mapRangesForNode:(id)a0;
- (void)setAbsolutePositionOfNode:(id)a0 parentRow:(int)a1 parentXOffset:(float)a2;

@end
