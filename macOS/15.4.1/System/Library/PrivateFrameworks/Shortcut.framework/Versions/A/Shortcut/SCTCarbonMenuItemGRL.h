@class SCTCarbonMenu;

@interface SCTCarbonMenuItemGRL : SCTGRL {
    SCTCarbonMenu *mCarbonMenu;
}

- (void)dealloc;
- (id)title;
- (void)perform;
- (void)hide:(id)a0;
- (unsigned long long)imageScaling;
- (void)show;
- (id)fullTitle;
- (BOOL)imageWantsNonVibrantAppearance;
- (id)initWithCarbonMenu:(id)a0;
- (BOOL)isValidTitleString:(id)a0 forIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemBoundsInScreenCoordinatesForItem:(struct OpaqueMenuRef { } *)a0 itemIndex:(unsigned short)a1;
- (id)localizedCategory;
- (void)notifyPerform:(id)a0;
- (id)representativeIconForSelectedState:(BOOL)a0;
- (id)resolveFromContainer:(id)a0;
- (void)resolveResourceAndInvoke:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectForResource;
- (void)showcaseMenuItem:(struct OpaqueMenuRef { } *)a0 itemIndex:(unsigned short)a1;
- (id)titleComponentAtIndex:(unsigned long long)a0;

@end
