@class AKController, NSArray, NSArrayController, NSString, NSLayoutConstraint;

@interface AKGridViewController : NSViewController <NSCollectionViewDelegate>

@property (retain) NSLayoutConstraint *widthConstraint;
@property (retain) NSLayoutConstraint *heightConstraint;
@property (weak) AKController *controller;
@property (copy) id /* block */ actionBlock;
@property (copy) id /* block */ potentialActionBlock;
@property (retain) NSArrayController *itemArrayController;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)selectedObjects;
- (void)awakeFromNib;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndex:(unsigned long long)a1;
- (id)gridView;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (id)selectionIndexes;
- (BOOL)setSelectionIndexes:(id)a0;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)initWithDefaultNib;
- (void)menuDidOpen:(id)a0;
- (void)performActionOnPotentialSelection;
- (void)performActionOnSelection;
- (void)performActionWithSender:(id)a0;

@end
