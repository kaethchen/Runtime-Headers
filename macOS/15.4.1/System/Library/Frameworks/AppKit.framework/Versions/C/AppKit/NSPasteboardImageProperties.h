@interface NSPasteboardImageProperties : NSObject

@property struct CGSize { double width; double height; } pixelSize;
@property struct CGPoint { double x; double y; } resolution;
@property unsigned int orientation;
@property unsigned long long bitsPerPixel;
@property BOOL hasAlpha;

- (id)debugDescription;
- (id)init;

@end
