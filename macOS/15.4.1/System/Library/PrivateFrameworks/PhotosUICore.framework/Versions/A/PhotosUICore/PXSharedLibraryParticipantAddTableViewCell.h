@class NSImageView, NSTextField, NSView, NSButton;
@protocol PXSharedLibraryParticipantAddTableViewCellDelegate;

@interface PXSharedLibraryParticipantAddTableViewCell : NSTableCellView {
    NSImageView *_addImageView;
    NSTextField *_titleLabel;
    NSButton *_addButton;
}

@property (weak, nonatomic) id<PXSharedLibraryParticipantAddTableViewCellDelegate> delegate;
@property (retain, nonatomic) NSView *popoverSourceView;
@property (nonatomic) BOOL isEnabled;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addParticipants:(id)a0;

@end
