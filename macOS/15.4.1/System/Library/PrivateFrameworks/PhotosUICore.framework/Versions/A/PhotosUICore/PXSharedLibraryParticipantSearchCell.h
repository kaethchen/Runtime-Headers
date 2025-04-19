@class NSTextField, NSString, NSImage, NSLayoutConstraint, PXRoundImageView, NSButton;
@protocol PXSharedLibraryParticipantSearchCellDisclosureDelegate;

@interface PXSharedLibraryParticipantSearchCell : NSTableCellView {
    NSLayoutConstraint *_canDiscloseStackViewTrailingConstraint;
    NSLayoutConstraint *_cannotDiscloseStackViewTrailingConstraint;
    PXRoundImageView *_imageView;
    NSTextField *_textLabel;
    NSTextField *_detailTextLabel;
    NSButton *_discloseButton;
}

@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL canDisclose;
@property (nonatomic) long long resultType;
@property (weak, nonatomic) id<PXSharedLibraryParticipantSearchCellDisclosureDelegate> disclosureDelegate;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_toggleDisclosure:(id)a0;

@end
