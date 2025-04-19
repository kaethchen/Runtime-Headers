@class NSData, NSString;

@interface ABCardViewImage : NSObject

@property (retain) NSData *imageData;
@property (retain) NSData *largeImageData;
@property (retain) NSString *imageType;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (retain) NSData *memojiMetadata;

- (void).cxx_destruct;
- (id)initWithImageData:(id)a0 largeImageData:(id)a1 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageType:(id)a3;

@end
