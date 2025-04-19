@class CAGradientLayer, NSString, NSMapTable, NSMutableArray, VisualScrubberViewLayout;
@protocol VisualScrubberViewControllerDelegate, AccordionHostableExpansionRequestHandler;

@interface VisualScrubberViewController : NSViewController <NSScrubberDataSource, NSScrubberDelegate, AccordionHostable> {
    BOOL _shouldIgnoreTouchesWhenLoadingScrubber;
    VisualScrubberViewLayout *_scrubberLayout;
    NSMapTable *_itemsToItemViews;
    CAGradientLayer *_leftDropOffGradient;
    CAGradientLayer *_rightDropOffGradient;
    NSMutableArray *_deferredOperations;
    NSMutableArray *_functionBarSelectionTimestamps;
    long long _functionBarProposedIndex;
}

@property (nonatomic) unsigned long long dropOffGradientModes;
@property (retain, nonatomic) NSMutableArray *items;
@property (weak, nonatomic) id<VisualScrubberViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AccordionHostableExpansionRequestHandler> expansionRequestHandler;

- (id)init;
- (void).cxx_destruct;
- (id)_scrubber;
- (void)didBeginInteractingWithScrubber:(id)a0;
- (void)didFinishInteractingWithScrubber:(id)a0;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)loadView;
- (void)moveItemFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)reloadItemAtIndex:(unsigned long long)a0;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (void)viewDidLayout;
- (void)accordionHost:(id)a0 viewWillCollapse:(BOOL)a1;
- (void)_configureScrubberItemView:(id)a0 forItem:(id)a1;
- (void)_selectTabForProposedIndex;
- (void)_setScrubberIgnoresTouches:(BOOL)a0;
- (id)_setUpDropOffGradientLayerWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateDropOffGradientModes;
- (void)accordionHost:(id)a0 viewWillBeInserted:(BOOL)a1 viewWillExpand:(BOOL)a2;
- (void)accordionHost:(id)a0 viewWillBeRemoved:(BOOL)a1;
- (void)accordionHost:(id)a0 viewWillExpand:(BOOL)a1;
- (void)beginBatchTabManipulation;
- (void)endBatchTabManipulation;
- (double)minimumWidthForAccordionHost:(id)a0;
- (void)removeItemAtIndex:(unsigned long long)a0 selectingItemAtIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)setSelectedIndex:(unsigned long long)a0 animate:(BOOL)a1;
- (BOOL)shouldExpandWhenClickedForAccordionHost:(id)a0;

@end
