@interface IKSlideshow : NSObject {
    id _privateData;
}

@property double autoPlayDelay;

+ (id)sharedSlideshow;
+ (BOOL)canExportToApplication:(id)a0;
+ (void)exportSlideshowItem:(id)a0 toApplication:(id)a1;
+ (void)exportSlideshowItemToApplication:(id)a0 application:(id)a1;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)reloadData;
- (void)disposeData;
- (unsigned long long)indexOfCurrentSlideshowItem;
- (void)reloadSlideshowItemAtIndex:(unsigned long long)a0;
- (void)runSlideshowWithDataSource:(id)a0 inMode:(id)a1 options:(id)a2;
- (id)slideshowHandler;
- (void)stopSlideshow:(id)a0;

@end
