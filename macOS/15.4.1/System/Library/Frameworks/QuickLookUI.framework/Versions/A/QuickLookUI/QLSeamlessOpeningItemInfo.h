@class NSImage;

@interface QLSeamlessOpeningItemInfo : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (retain) NSImage *sourceImage;

+ (id)info;

- (void).cxx_destruct;

@end
