@class NSArray, NSString, NSLayoutConstraint;

@interface SOAttachmentsViewController : SOChatViewController <NSMenuDelegate>

@property (class, readonly) struct CGSize { double x0; double x1; } itemSize;
@property (class, readonly) struct CGSize { double x0; double x1; } itemSeparation;

@property (readonly) BOOL hasAttachments;
@property (copy, nonatomic) NSArray *attachments;
@property (retain) NSLayoutConstraint *preferredHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)copy:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (id)actionableIndexes:(id)a0;
- (void)attachmentsDidChange;
- (id)createObjectsToCopyToPasteboard:(id)a0;
- (double)stackViewFrameDidChange:(struct CGSize { double x0; double x1; })a0;

@end
