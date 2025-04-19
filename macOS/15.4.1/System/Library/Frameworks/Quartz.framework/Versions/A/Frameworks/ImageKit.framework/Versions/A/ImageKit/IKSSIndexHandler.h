@class IKSSIndexSheetSelectionLayer, NSString, CAScrollLayer, IKSSContentLayer, IKSSIndexView, IKSSBackgroundWindow, IKSlideshowHandler, CAKeyframeAnimation;

@interface IKSSIndexHandler : NSObject <NSWindowDelegate> {
    IKSlideshowHandler *_slideshowHandler;
    IKSSBackgroundWindow *_backgroundWindow;
    CAScrollLayer *_bodyLayer;
    IKSSIndexSheetSelectionLayer *_selectionLayer;
    IKSSContentLayer *_contentLayer;
    struct CGImage { } *_missingSlide;
    CAKeyframeAnimation *_progressAnimation;
    IKSSIndexView *_view;
    id *_thumbnailLayers;
    long long _thumbnailLayersCount;
}

@property double thumbnailSize;
@property long long selectedThumbnailIndex;
@property int columns;
@property int rows;
@property BOOL thumbnailsFitOnScreen;
@property (readonly) IKSSBackgroundWindow *indexWindow;
@property BOOL switchedToIndexMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (unsigned long long)itemCount;
- (void)select;
- (void)applicationDidChangeScreenParameters:(id)a0;
- (id)contentLayer;
- (void)moveSelection:(int)a0 :(int)a1;
- (void)switchToIndexMode:(id)a0 currentIndex:(long long)a1;
- (void)calcThumbnailSize;
- (id)initWithSlideshow:(id)a0;
- (void)itemCountChanged:(id)a0;
- (BOOL)layerCanBeSelected:(id)a0;
- (void)nextPage:(int)a0;
- (void)selectLayer:(id)a0;
- (unsigned long long)selectedThumbnail;
- (void)setupLayers;
- (void)setupResources;
- (void)switchToSingleMode;
- (void)thumbnailDidLoad:(id)a0 index:(unsigned long long)a1 currentCount:(unsigned long long)a2;
- (void)thumbnailDidRotate:(id)a0 index:(unsigned long long)a1;
- (void)thumbnailsDidChange;
- (void)updateSelection:(BOOL)a0;
- (void)updateThumbnails;

@end
