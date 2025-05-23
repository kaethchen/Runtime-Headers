@class NSImage, NSURL, NSError, NSObject;
@protocol OS_dispatch_group;

@interface MPArtworkResizeOperation : NSOperation

@property (retain, nonatomic) NSImage *image;
@property (nonatomic) struct CGSize { double width; double height; } scaledFittingSize;
@property (nonatomic) BOOL usesExactFittingSizeAsDestinationSize;
@property (readonly, nonatomic) NSImage *resizedImage;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *operationGroup;

- (void).cxx_destruct;
- (void)main;
- (struct CGSize { double x0; double x1; })_resizedScaledSizeForScaledImageSize:(struct CGSize { double x0; double x1; })a0 scaledFittingSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithImage:(id)a0 scaledFittingSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithImage:(id)a0 scaledFittingSize:(struct CGSize { double x0; double x1; })a1 destinationURL:(id)a2;
- (id)initWithImage:(id)a0 scaledFittingSize:(struct CGSize { double x0; double x1; })a1 useExactFittingSizeAsDestinationSize:(BOOL)a2 destinationURL:(id)a3;

@end
