@class NSView, NSButton, NSTextField;
@protocol PXComposeRecipientAddRecipientTableViewCellDelegate;

@interface PXComposeRecipientAddRecipientTableViewCell : NSTableCellView {
    NSButton *_button;
    NSTextField *_titleLabel;
}

@property (weak, nonatomic) id<PXComposeRecipientAddRecipientTableViewCellDelegate> delegate;
@property (retain, nonatomic) NSView *popoverSourceView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_buttonAction:(id)a0;

@end
