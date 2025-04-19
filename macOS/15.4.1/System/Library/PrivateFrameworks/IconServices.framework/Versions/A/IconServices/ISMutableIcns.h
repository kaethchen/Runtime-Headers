@class NSString, ISIcns, NSDictionary;

@interface ISMutableIcns : ISIcns

@property unsigned int type;
@property (copy) NSString *name;
@property (retain) ISIcns *selectedVariant;
@property (retain) ISIcns *templateVariant;
@property (retain) NSDictionary *userInfo;

+ (int)_iconIndexSmallerThanSize:(struct CGSize { double x0; double x1; })a0 scale:(unsigned int)a1 template:(BOOL)a2;
+ (struct CGImage { } *)_scaledCGImage:(struct CGImage { } *)a0 forICSNSizeAtScale:(unsigned int)a1 template:(BOOL)a2 scaleToFit:(BOOL)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)initWithType:(unsigned int)a0;
- (BOOL)addCGImage:(struct CGImage { } *)a0 scale:(unsigned int)a1 error:(id *)a2;
- (void)setVariant:(id)a0 named:(id)a1;
- (id)_initWithType:(unsigned int)a0 scaleToFit:(BOOL)a1 imageProviderBlock:(id /* block */)a2;
- (BOOL)addImageData:(id)a0 iconIndex:(int)a1;
- (void)addImageWithBinding:(struct _LSBinding { } *)a0 iconIndex:(int)a1;
- (id)initWithType:(unsigned int)a0 imageProviderBlock:(id /* block */)a1;
- (void)removeValueAtIndex:(int)a0;
- (void)setCGImage:(struct CGImage { } *)a0 atIndex:(int)a1;
- (void)setData:(id)a0 atIndex:(int)a1;
- (void)setData:(id)a0 withElementType:(unsigned int)a1;
- (short)setHandle:(char **)a0 withType:(unsigned int)a1;

@end
