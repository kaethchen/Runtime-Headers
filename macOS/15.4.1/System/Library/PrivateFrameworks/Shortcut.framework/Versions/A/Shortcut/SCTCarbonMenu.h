@class NSMutableArray;

@interface SCTCarbonMenu : NSObject {
    NSMutableArray *mMenuPath;
}

+ (long long)closeShowcasedMenu:(id)a0;
+ (void)showcaseMenu:(id)a0 andShiftFocus:(BOOL)a1;

- (void)dealloc;
- (id)description;
- (void)hide:(id)a0;
- (void)show;
- (long long)closeMenuToIntersectionWithNewMenu:(id)a0;
- (id)initWithMenu:(struct OpaqueMenuRef { } *)a0 item:(unsigned short)a1 withParentMenu:(id)a2;
- (id)leafItem;
- (id)menuPath;
- (id)menuTitlePath;
- (void)openMenuFromDepth:(long long)a0 shiftFocus:(BOOL)a1;
- (void)showAndShiftFocus;
- (void)validateMenuPath;

@end
