@class NSString;
@protocol NUImageBuffer;

@interface PIInpaintMask : NSObject

@property (readonly, nonatomic) id<NUImageBuffer> buffer;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } extent;
@property (readonly, nonatomic) struct { long long numerator; long long denominator; } scale;

- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 identifier:(id)a1;
- (id)initWithBuffer:(id)a0 identifier:(id)a1 extent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 scale:(struct { long long x0; long long x1; })a3;

@end
