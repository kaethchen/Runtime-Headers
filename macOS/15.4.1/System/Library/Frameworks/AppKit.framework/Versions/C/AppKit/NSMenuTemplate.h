@class NSString;

@interface NSMenuTemplate : NSObject <NSCoding> {
    NSString *title;
    struct CGPoint { double x; double y; } location;
    id view;
    NSString *menuClassName;
    id supermenu;
    id realObject;
    id extension;
    BOOL isWindowsMenu;
    BOOL isRequestMenu;
    BOOL isFontMenu;
    char interfaceStyle;
    char *cMenuClassName;
    BOOL disabled;
    id popupCell;
}

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)supermenu;
- (void)_setTitle:(id)a0;
- (long long)numberOfItems;
- (BOOL)_isEnabled;
- (BOOL)_pullsDown;
- (void)_setEnabled:(BOOL)a0;
- (void)_setMenuClassName:(id)a0;
- (void)_setOwnedByPopUp:(id)a0;
- (void)_setPullsDown:(BOOL)a0;
- (id)itemMatrix;
- (id)menuClassName;
- (id)nibInstantiate;
- (void)setSupermenu:(id)a0;

@end
