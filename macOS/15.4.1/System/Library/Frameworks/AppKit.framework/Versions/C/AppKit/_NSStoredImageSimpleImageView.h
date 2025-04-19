@class NSImage;

@interface _NSStoredImageSimpleImageView : _NSSimpleImageView

@property (retain, nonatomic) NSImage *image;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (void)setSymbolImage:(id)a0 withContentTransition:(id)a1 options:(id)a2;

@end
