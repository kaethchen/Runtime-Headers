@class NSString, NSLayoutConstraint;

@interface RichMessageChildCellView : MUIRichMessageCellBase <MUIReusableIdentifiable>

@property (class, readonly, copy, nonatomic) NSString *reusableIdentifier;

@property (weak, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *senderLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusSenderConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusAvatarConstraint;
@property (readonly, nonatomic) unsigned long long numberOfSnippetLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_calculateRowHeightUsingTextField:(id)a0;

- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)_updateAttachmentViewWithImage:(id)a0;
- (void)_updateAvatarViewWithContacts:(id)a0;
- (void)_updateExtensionIndicatorWithImage:(id)a0;
- (void)_updateFirstFlagImage:(id)a0;
- (void)_updateHasGeneratedSummary:(id)a0;
- (void)_updateStatusViewWithImage:(id)a0;
- (void)_updateTimeSensitiveIndicatorWithImage:(id)a0;
- (void)_updateUnreadIndicatorWithImage:(id)a0;
- (void)_updateVIPIndicatorWithImage:(id)a0;
- (void)updateFontsUsingBold:(BOOL)a0;

@end
