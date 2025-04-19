@class NSTextField, NSString, NSTrackingArea, PHPerson, NSPersonNameComponents, PXPeoplePickerSelectionView, NSButton, NSLayoutConstraint;
@protocol PXPeoplePickerCollectionViewItemDelegate;

@interface PXPeoplePickerCollectionViewItem : NSCollectionViewItem {
    PXPeoplePickerSelectionView *_selectionView;
    NSTrackingArea *_trackingArea;
    NSButton *_identifyButton;
    NSButton *_removeButton;
    NSLayoutConstraint *_imageViewTopConstraint;
    NSLayoutConstraint *_imageViewLeadingConstraint;
    NSLayoutConstraint *_imageViewTrailingConstraint;
    NSLayoutConstraint *_imageViewToTextFieldVerticalConstraint;
}

@property (class, readonly, nonatomic) NSString *defaultIdentifier;

@property (readonly, nonatomic) NSTextField *infoTextField;
@property (nonatomic) BOOL usesBadgeSelection;
@property (nonatomic) BOOL usesLargeMargins;
@property (nonatomic) BOOL showsIdentifyButton;
@property (nonatomic) BOOL showsRemoveButtonOnHover;
@property (retain, nonatomic) PHPerson *imagePerson;
@property (retain, nonatomic) NSPersonNameComponents *monogramNameComponents;
@property (retain, nonatomic) NSString *monogramEmailAddress;
@property (nonatomic) double displayScale;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (weak, nonatomic) id<PXPeoplePickerCollectionViewItemDelegate> delegate;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)remove:(id)a0;
- (void)loadView;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setHighlightState:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)_updateView;
- (void)_updateIdentifyButton;
- (void)_updateImageViewMargins;
- (void)_updateMonogramEmailAddress;
- (void)_updateMonogramNameComponents;
- (void)_updateRemoveButton;
- (void)identify:(id)a0;

@end
