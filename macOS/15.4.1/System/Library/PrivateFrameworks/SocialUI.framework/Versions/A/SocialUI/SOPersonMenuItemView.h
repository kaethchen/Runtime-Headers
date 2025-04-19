@class NSString, NSImageView, NSTextField;

@interface SOPersonMenuItemView : NSView

@property (retain) NSImageView *checkmarkImageView;
@property (retain) NSTextField *titleTextField;
@property (retain) NSTextField *labelTextField;
@property (retain) NSImageView *iconImageView;
@property (copy) NSString *title;
@property (copy) NSString *label;

- (id)init;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
