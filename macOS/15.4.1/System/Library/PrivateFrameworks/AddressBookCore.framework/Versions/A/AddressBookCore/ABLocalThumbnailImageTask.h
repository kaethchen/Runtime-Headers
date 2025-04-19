@class NSArray, ABLocalImageLoader;

@interface ABLocalThumbnailImageTask : ABTask {
    NSArray *_imageIdentifiers;
    ABLocalImageLoader *_imageLoader;
}

- (void)dealloc;
- (id)run:(id *)a0;
- (id)initWithImageIdentifiers:(id)a0 imagesFolder:(id)a1;

@end
