@class ODIState;

@interface ODIHorizonalList3 : NSObject {
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (BOOL)mapIdentifier:(id)a0 state:(id)a1;

- (void).cxx_destruct;
- (id)initWithState:(id)a0;
- (void)map;
- (void)mapBaseStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapOnePillarStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapPillarPoints:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)mapRoofStyleFromPoint:(id)a0 shape:(id)a1;
- (void)setMaxPointCount:(unsigned int)a0;

@end
