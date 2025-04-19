@interface ISImageSetVariantResourceImage : NSObject

@property unsigned long long size;
@property unsigned long long scale;
@property (readonly) struct CGImage { } *image;

+ (id)keyForSize:(unsigned long long)a0 scale:(unsigned long long)a1;

- (void)dealloc;
- (id)description;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(unsigned long long)a1;

@end
