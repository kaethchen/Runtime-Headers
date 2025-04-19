@class NSString, NSImage;

@interface CWMenuItemImage : NSObject

@property (copy) NSString *text;
@property double fontSize;
@property (retain) NSImage *image;
@property (retain) NSImage *highlightedImage;
@property double adjustY;
@property double paddingBefore;
@property double paddingAfter;
@property double scale;

- (void)dealloc;
- (id)init;

@end
