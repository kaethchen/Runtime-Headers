@interface _NSQuickActionIcon : ISIcon

@property (retain) id imageCache;
@property (readonly, copy, nonatomic) id /* block */ imageProvider;

- (void).cxx_destruct;
- (id)_generateImageWithDescriptor:(id)a0;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)imageForImageDescriptor:(id)a0;
- (id)initWithCGImageProvider:(id /* block */)a0;

@end
