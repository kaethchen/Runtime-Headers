@class NSData, NSString;

@interface ABCNPhoto : NSObject <NSCopying>

@property (readonly) NSData *imageData;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly) NSString *identifier;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithImageData:(id)a0;
- (id)initWithImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 identifier:(id)a2;

@end
