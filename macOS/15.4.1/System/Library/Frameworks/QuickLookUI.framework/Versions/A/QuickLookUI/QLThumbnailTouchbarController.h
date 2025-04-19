@class NSObject, NSString, NSScrubber, NSTouchBarItem, QLThumbnailScrubberItemView, NSTouchBar;
@protocol QLThumbnailTouchbarControllerDelegate;

@interface QLThumbnailTouchbarController : NSObject <NSTouchBarDelegate, NSScrubberDataSource, NSScrubberDelegate> {
    NSTouchBar *_touchBar;
}

@property (retain) NSTouchBarItem *pageScrubberItem;
@property (retain) QLThumbnailScrubberItemView *previouslySelectedItemView;
@property (readonly) NSScrubber *scrubber;
@property (readonly) NSTouchBar *touchBar;
@property (weak, nonatomic) NSObject<QLThumbnailTouchbarControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (unsigned long long)currentPage;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (void)highlightSelectedItemAtIndex:(long long)a0;
- (void)notifyDelegateOfPageUpdate;

@end
