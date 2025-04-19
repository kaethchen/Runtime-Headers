@class NSTabBarItem, NSImage, NSString, NSView, NSAttributedString, NSWindow;

@interface NSWindowTab : NSObject {
    NSString *_title;
    NSAttributedString *_attributedTitle;
    NSString *_toolTip;
    NSImage *_image;
    NSView *_accessoryView;
    NSTabBarItem *_tabBarItem;
    BOOL _showIcon;
}

@property (weak) NSWindow *window;
@property (copy) NSImage *image;
@property BOOL showIcon;
@property (readonly) NSTabBarItem *tabBarItem;
@property (copy) NSString *title;
@property (copy) NSAttributedString *attributedTitle;
@property (copy) NSString *toolTip;
@property (retain) NSView *accessoryView;

- (void).cxx_destruct;

@end
