@class NSString, NSImage, NSMenu, NSFont;

@interface NSToolbarPullDownButton : NSPopUpButton <NSMenuToolbarItemControl> {
    BOOL _showsIndicator;
    NSImage *_image;
    NSString *_title;
}

@property (retain) NSImage *image;
@property (copy) NSString *title;
@property (copy) NSFont *font;
@property (retain) NSMenu *menu;
@property BOOL showsIndicator;
@property (weak) id target;
@property SEL action;
@property unsigned long long controlSize;

- (void)dealloc;
- (id)init;
- (void)_configureDisplayItem;

@end
