@class NSString, NSImage, NSArray, NSAttributedString, NSColor;

@interface NSTabBarItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *label;
@property (copy) NSAttributedString *attributedTitle;
@property (copy) NSString *toolTip;
@property (retain) NSImage *image;
@property (copy) NSColor *themeColor;
@property (getter=isPinned) BOOL pinned;
@property BOOL showIcon;
@property BOOL hideTab;
@property (copy) NSArray *accessoryViews;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
