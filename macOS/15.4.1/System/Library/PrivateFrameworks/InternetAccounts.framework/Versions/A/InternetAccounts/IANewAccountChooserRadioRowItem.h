@class NSImageView, NSTextField, NSView, NSString, NSImage, NSButton, IAAListPlugin;

@interface IANewAccountChooserRadioRowItem : NSObject

@property (retain, nonatomic) NSView *view;
@property (retain) NSImageView *imageView;
@property (retain) NSTextField *textField;
@property (retain) NSButton *radioButton;
@property (copy) NSString *text;
@property (copy) NSImage *image;
@property (copy) NSString *title;
@property (retain) IAAListPlugin *plugin;
@property (retain) id delegate;

+ (id)itemWithTitle:(id)a0 image:(id)a1;
+ (id)itemWithTitle:(id)a0 text:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (long long)state;
- (void)setState:(long long)a0;
- (void)radioButton:(id)a0;
- (void)syncUI;

@end
