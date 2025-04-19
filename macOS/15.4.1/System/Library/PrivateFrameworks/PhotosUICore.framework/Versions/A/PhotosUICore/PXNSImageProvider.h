@class NSImage, NSString;

@interface PXNSImageProvider : PXObservable <PXMutableNSImageProvider>

@property (retain, nonatomic) NSImage *image;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)performChanges:(id /* block */)a0;
- (void)cancelPreparation;
- (id)mutableChangeObject;
- (void)prepareToProvideImage;

@end
