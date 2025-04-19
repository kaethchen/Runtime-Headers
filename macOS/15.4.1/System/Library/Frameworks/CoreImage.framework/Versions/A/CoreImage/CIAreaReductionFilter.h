@interface CIAreaReductionFilter : CIReductionFilter

- (id)outputImage;
- (id)_reduce1X4;
- (id)_reduce2X2;
- (id)_reduce4X1;
- (id)_reduce4X4;

@end
