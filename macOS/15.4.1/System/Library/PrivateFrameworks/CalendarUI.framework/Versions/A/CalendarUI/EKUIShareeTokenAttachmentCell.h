@class EKUIShareesGadget;

@interface EKUIShareeTokenAttachmentCell : EKUITokenAttachmentCell

@property (retain) EKUIShareesGadget *shareeGadget;

- (void).cxx_destruct;
- (BOOL)shouldShowToken;
- (id)imageForRepresentedObject;
- (id)initCellForTokenField:(id)a0;
- (id)stringForRepresentedObject;

@end
