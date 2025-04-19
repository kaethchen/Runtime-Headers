@class NSMenuItem, NSPopover, NSString, NSMutableSet, IMMessagePartChatItem, NSLayoutConstraint, NSMutableArray, NSTableView;
@protocol SOStickerViewerControllerDelegate;

@interface SOStickerViewerController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSPopoverDelegate>

@property (retain, nonatomic) IMMessagePartChatItem *chatItem;
@property (retain, nonatomic) NSPopover *popover;
@property (retain, nonatomic) NSMutableArray *stickers;
@property (retain, nonatomic) NSMutableSet *stickerTransferGUIDsToDelete;
@property (retain) NSTableView *stickerTableView;
@property (retain) NSLayoutConstraint *preferredScrollViewHeightConstraint;
@property (retain) NSMenuItem *deleteStickersMenuItem;
@property (weak, nonatomic) id<SOStickerViewerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (void)delete:(id)a0;
- (void)dismissPopover;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowActionsForRow:(long long)a1 edge:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)validateMenuItem:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (double)_preferredScrollViewHeightConstraintConstant;
- (id)_stickerChatItemForRow:(long long)a0;
- (void)displayStickerViewerForChatItem:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 preferredEdge:(unsigned long long)a3;
- (void)enqueueStickersToDeleteForTableRows:(id)a0;
- (BOOL)popoverIsShown;
- (id)stickerTableRowsToActOn;

@end
