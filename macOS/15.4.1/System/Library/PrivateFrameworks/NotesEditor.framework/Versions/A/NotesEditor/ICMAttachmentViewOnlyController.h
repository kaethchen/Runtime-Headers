@class NSPopover, NSString, NSView, ICSelectorDelayer, NSButton, ICAttachment;

@interface ICMAttachmentViewOnlyController : NSObject <NSPopoverDelegate>

@property (weak, nonatomic) NSView *attachmentView;
@property (weak, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSButton *viewOnlyButton;
@property (retain, nonatomic) NSPopover *viewOnlyPopover;
@property (retain, nonatomic) ICSelectorDelayer *hideViewOnlyDocumentButtonSelectorDelayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowForAttachment:(id)a0;

- (void).cxx_destruct;
- (void)popoverDidShow:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)hideViewOnlyButton;
- (id)initWithAttachmentView:(id)a0 attachment:(id)a1;
- (void)viewOnlyButtonClicked:(id)a0;

@end
