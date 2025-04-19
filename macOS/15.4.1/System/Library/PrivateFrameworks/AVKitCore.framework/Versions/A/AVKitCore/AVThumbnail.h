@class NSImage;

@interface AVThumbnail : NSObject

@property (readonly) NSImage *image;
@property (readonly) double time;

- (id)init;
- (void).cxx_destruct;
- (id)initWithThumbnailImage:(id)a0 time:(double)a1;

@end
