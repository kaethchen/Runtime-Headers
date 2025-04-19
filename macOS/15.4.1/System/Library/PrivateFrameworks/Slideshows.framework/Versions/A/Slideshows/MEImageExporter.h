@class NSString;

@interface MEImageExporter : NSOperation {
    NSString *mOriginalPath;
    struct CGImage { } *mOriginalImage;
    struct CGSize { double width; double height; } mSize;
    NSString *mDestinationPath;
    BOOL mBlackWhite;
}

+ (id)operationWithOriginalPath:(id)a0 loadedImage:(struct CGImage { } *)a1 size:(struct CGSize { double x0; double x1; })a2 andDestinationPath:(id)a3;
+ (id)operationWithOriginalPath:(id)a0 size:(struct CGSize { double x0; double x1; })a1 andDestinationPath:(id)a2;
+ (id)operationWithOriginalPath:(id)a0 size:(struct CGSize { double x0; double x1; })a1 blackWhite:(BOOL)a2 andDestinationPath:(id)a3;

- (void)dealloc;
- (void)cleanup;
- (void)main;
- (id)initWithOriginalPath:(id)a0 loadedImage:(struct CGImage { } *)a1 size:(struct CGSize { double x0; double x1; })a2 andDestinationPath:(id)a3;
- (id)initWithOriginalPath:(id)a0 size:(struct CGSize { double x0; double x1; })a1 andDestinationPath:(id)a2;
- (id)initWithOriginalPath:(id)a0 size:(struct CGSize { double x0; double x1; })a1 blackWhite:(BOOL)a2 andDestinationPath:(id)a3;

@end
