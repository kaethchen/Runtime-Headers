@class SCTAppKitMenu;

@interface SCTAppKitMenuItemGRL : SCTGRL {
    SCTAppKitMenu *mMenu;
}

+ (void)handleMenuGRLNotification:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)title;
- (void)perform;
- (void)hide:(id)a0;
- (unsigned long long)imageScaling;
- (id)initWithMenu:(id)a0;
- (void)show;
- (void)removeObservers;
- (void)_simulateAction:(id)a0 forItemAtIndex:(long long)a1;
- (void)addObservers;
- (id)fullTitle;
- (BOOL)imageWantsNonVibrantAppearance;
- (BOOL)isValidTitleString:(id)a0 forIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemBoundsInScreenCoordinatesForItem:(id)a0 itemIndex:(long long)a1;
- (id)localizedCategory;
- (void)notifyPerform:(id)a0;
- (id)representativeIconForSelectedState:(BOOL)a0;
- (id)resolveFromContainer:(id)a0;
- (void)resolveResourceAndInvoke:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectForResource;
- (void)showcaseMenuItem:(id)a0 itemIndex:(long long)a1;
- (id)titleComponentAtIndex:(unsigned long long)a0;

@end
