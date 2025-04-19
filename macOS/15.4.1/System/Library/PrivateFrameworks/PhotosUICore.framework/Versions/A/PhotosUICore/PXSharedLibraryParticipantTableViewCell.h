@class NSTextField, NSString, NSImageSymbolConfiguration, PXSharedLibraryParticipantTableCellModel, NSTrackingArea, NSImage, NSLayoutConstraint, NSButton, PXRoundImageView;
@protocol PXSharedLibraryParticipantTableViewCellDelegate;

@interface PXSharedLibraryParticipantTableViewCell : NSTableCellView <PXChangeObserver> {
    PXRoundImageView *_imageView;
    NSTextField *_nameLabel;
    NSTextField *_addressLabel;
    NSTrackingArea *_trackingArea;
    NSLayoutConstraint *_trailingStackViewConstraintToContainer;
    NSLayoutConstraint *_trailingStackViewConstraintToEllipsisButton;
    NSLayoutConstraint *_trailingEllipsisButtonConstraintToContainer;
    NSButton *_ellipsisButton;
    NSImage *_ellipsisDefaultImage;
    NSImage *_ellipsisClickedImage;
    NSImageSymbolConfiguration *_ellipsisDefaultSymbolConfiguration;
    NSImageSymbolConfiguration *_ellipsisClickedSymbolConfiguration;
    BOOL _mouseInTrackingArea;
}

@property (class, readonly, nonatomic) double preferredHeight;
@property (class, readonly, nonatomic) double imageViewHeight;

@property (readonly, nonatomic) PXSharedLibraryParticipantTableCellModel *cellModel;
@property (weak, nonatomic) id<PXSharedLibraryParticipantTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)_updateImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)popUpMenu:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_ellipsisButtonClicked:(id)a0;
- (void)_removeButtonClicked:(id)a0;
- (void)_updateAddress;
- (void)_updateEllipsisButton;
- (void)_updateName;

@end
