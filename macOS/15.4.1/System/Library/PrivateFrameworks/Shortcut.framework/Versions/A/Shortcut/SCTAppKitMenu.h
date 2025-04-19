@class NSMutableArray;

@interface SCTAppKitMenu : NSObject {
    NSMutableArray *_menuPath;
}

+ (long long)closeShowcasedMenu:(id)a0;
+ (void)showcaseMenu:(id)a0 andShiftFocus:(BOOL)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)hide:(id)a0;
- (void)show;
- (long long)closeMenuToIntersectionWithNewMenu:(id)a0;
- (id)initWithMenu:(id)a0 item:(long long)a1 withParentMenu:(id)a2;
- (id)leafItem;
- (id)menuPath;
- (id)menuTitlePath;
- (void)openMenuFromDepth:(long long)a0 shiftFocus:(BOOL)a1;
- (void)showAndShiftFocus;
- (void)validateMenuPath;

@end
