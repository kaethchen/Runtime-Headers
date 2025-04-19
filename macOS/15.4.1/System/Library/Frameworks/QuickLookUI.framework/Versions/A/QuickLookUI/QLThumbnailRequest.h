@class NSURL, NSDictionary, NSImage;

@interface QLThumbnailRequest : NSObject {
    struct __QLThumbnail { } *_thumbnail;
}

@property (readonly) struct __QLThumbnail { } *thumbnail;
@property (readonly) NSURL *URL;
@property (readonly) struct CGSize { double x0; double x1; } maximumSize;
@property (readonly) NSDictionary *options;
@property (readonly) NSImage *image;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRect;

- (void)dealloc;
- (void)dispatchInQueue:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithURL:(id)a0 maximumSize:(struct CGSize { double x0; double x1; })a1 options:(id)a2;

@end
