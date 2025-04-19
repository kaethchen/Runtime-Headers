@class AKController, NSString, NSScrubber, NSTouchBarItem, NSGroupTouchBarItem;

@interface AKDFRHighlightsController : NSObject <NSTouchBarDelegate, NSScrubberDataSource, NSScrubberDelegate>

@property (weak) AKController *controller;
@property (retain) NSScrubber *scrubber;
@property (retain) NSGroupTouchBarItem *touchBarItem;
@property (retain) NSTouchBarItem *underlineItem;
@property (retain) NSTouchBarItem *strikethroughItem;
@property (retain) NSTouchBarItem *colorSwatchesItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)_itemIdentifiers;
- (id)initWithIdentifier:(id)a0 controller:(id)a1;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)scrubber:(id)a0 didPressSelectedItemAtIndex:(long long)a1;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (void)_invalidateUI;
- (void)forwardToActionControllerFrom:(id)a0;
- (void)validateHighlightOptions;

@end
