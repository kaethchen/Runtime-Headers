@class NSString, NSImage;

@interface IKImageGridItem : NSObject

@property (retain) NSString *path;
@property long long scaleMode;
@property (retain) NSImage *image;
@property (retain) NSString *title;
@property BOOL useQLCache;

+ (id)itemWithImage:(id)a0;
+ (id)itemWithPath:(id)a0;

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (id)initWithImage:(id)a0;
- (id)imageRepresentation;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;

@end
