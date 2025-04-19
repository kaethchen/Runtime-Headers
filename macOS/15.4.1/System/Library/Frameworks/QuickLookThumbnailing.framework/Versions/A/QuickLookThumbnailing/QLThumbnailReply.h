@class NSArray, IOSurface, QLThumbnailItem, NSString, QLThumbnailMetadata;

@interface QLThumbnailReply : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property int iconFlavor;
@property BOOL isLowQuality;
@property int inlinePreviewMode;
@property (nonatomic) struct CGSize { double width; double height; } contextSize;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) id /* block */ drawingBlock;
@property (copy, nonatomic) id /* block */ drawInContextBlock;
@property (copy, nonatomic) id /* block */ ioSurfaceBlock;
@property (copy, nonatomic) id /* block */ ioSurfaceAsyncBlock;
@property (copy, nonatomic) id /* block */ rendererBlock;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) QLThumbnailItem *item;
@property (copy, nonatomic) NSArray *bitmapImages;
@property (retain, nonatomic) IOSurface *ioSurface;
@property (retain, nonatomic) QLThumbnailMetadata *metadata;
@property (copy, nonatomic) NSString *extensionBadge;

+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })a0 currentContextDrawingBlock:(id /* block */)a1;
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })a0 drawingBlock:(id /* block */)a1;
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })a0 ioSurfaceAsyncBlock:(id /* block */)a1;
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })a0 ioSurfaceBlock:(id /* block */)a1;
+ (id)replyWithData:(id)a0 contentType:(id)a1;
+ (id)replyWithFileURL:(id)a0 contentType:(id)a1;
+ (id)replyWithImageFileURL:(id)a0;
+ (id)replyWithImageRenderer:(id /* block */)a0;
+ (id)replyWithImages:(id)a0;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
