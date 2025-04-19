@class EKUIAttachmentGadget;

@interface EKUIAttachmentTableView : NSTableView

@property (weak) EKUIAttachmentGadget *controller;

- (void).cxx_destruct;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (BOOL)canBecomeKeyView;
- (void)endPreviewPanelControl:(id)a0;
- (id)initWithController:(id)a0;

@end
