@class EKAttachment, NSString, EKUITokenField, NSFont, EKUIAttachmentGadget;

@interface EKUIAttachmentLinkCellView : NSTableCellView <EKUITokenFieldDelegate, CalUITextFieldEditorDelegate>

@property (retain, nonatomic) EKAttachment *attachment;
@property (retain) EKUITokenField *tokenField;
@property (retain, nonatomic) NSFont *font;
@property (weak) EKUIAttachmentGadget *gadget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })fileIconSize;

- (id)init;
- (void).cxx_destruct;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 menuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 setUpTokenAttachmentCell:(id)a1 forRepresentedObject:(id)a2;
- (BOOL)tokenField:(id)a0 writeRepresentedObjects:(id)a1 toPasteboard:(id)a2;
- (void)copyAttachment:(id)a0;
- (void)openAttachment:(id)a0;
- (void)_copyAttachmentLink:(id)a0;
- (void)_openAttachmentURL:(id)a0;
- (void)doubleClickOnTokenCell:(id)a0;

@end
