@class NSString, NSImage, NSMenu, NSFont;

@interface NSToolbarPullDownButtonWithAction : NSSegmentedControl <NSMenuToolbarItemControl> {
    BOOL _showsIndicator;
    NSMenu *_menu;
}

@property (retain) NSImage *image;
@property (copy) NSString *title;
@property (copy) NSFont *font;
@property (retain) NSMenu *menu;
@property BOOL showsIndicator;
@property (weak) id target;
@property SEL action;
@property unsigned long long controlSize;

+ (Class)cellClass;

- (void)dealloc;
- (id)init;
- (void)_configureMenuSegment;

@end
