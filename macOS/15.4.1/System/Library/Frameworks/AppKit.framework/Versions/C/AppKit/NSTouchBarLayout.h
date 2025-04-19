@class NSString, NSBarLayout;

@interface NSTouchBarLayout : NSObject <NSBarLayoutDelegate> {
    NSBarLayout *_barLayout;
    double _centerX;
}

@property double visualCenterX;
@property double defaultItemPadding;
@property BOOL enforcesUniformHeight;
@property (getter=isCenterPrincipal) BOOL centerIsPrincipal;
@property long long accessoryUserInterfaceLayoutDirection;
@property long long itemUserInterfaceLayoutDirection;
@property double standardCenterWidth;
@property double leadingWidgetWidth;
@property BOOL allowsSingleItemClipping;
@property BOOL centerRequiresTrueCenterLayout;
@property BOOL overlayRequiresTrueCenterLayout;
@property BOOL overflowPreventsReflow;
@property BOOL overflowRequired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)toolbarLayoutWithVisualCenterX:(double)a0;
+ (id)touchBarLayoutWithVisualCenterX:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_fauxBarLayoutWrappersForTouchBarLayoutWrappers:(id)a0 centerItems:(id)a1;
- (id)_touchBarLayoutWrappersToAttributes:(id)a0;
- (id)attributesOfItems:(id)a0 centerItems:(id)a1 givenSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithVisualCenterX:(double)a0;
- (void)items:(id)a0 centerItems:(id)a1 minSize:(struct CGSize { double x0; double x1; } *)a2 maxSize:(struct CGSize { double x0; double x1; } *)a3;
- (double)layout:(id)a0 visualCenterXForCenterItems:(id)a1;

@end
