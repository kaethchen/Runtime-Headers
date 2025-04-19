@class IKSSIndexHandler, IKSlideshowHandler;

@interface IKSSContentLayer : CALayer {
    IKSSIndexHandler *_indexHandler;
    IKSlideshowHandler *_slideshow;
}

@property int thumbnailCount;
@property int thumbnailSize;
@property int itemsPerRow;
@property int rowsPerScreen;
@property int numberOfRows;

- (void)layoutSublayers;
- (id)initWithSlideshow:(id)a0 indexHandler:(id)a1;
- (void)layoutSublayers2;
- (id)visibleThumbnails;

@end
