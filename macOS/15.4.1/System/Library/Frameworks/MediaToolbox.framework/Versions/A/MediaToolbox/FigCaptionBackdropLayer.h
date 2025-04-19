@class CAFilter;

@interface FigCaptionBackdropLayer : FigBaseCABackdropLayer {
    CAFilter *backdropFilter;
}

+ (void)initialize;
+ (unsigned char)isSupported;

- (void)dealloc;
- (id)init;
- (void)applyRoundedCorners:(struct CGPath { } *)a0;
- (void)configure;
- (void)insertBackdropAsSublayerToLayer:(id)a0 below:(id)a1;
- (void)removeBackdropFromSuperLayer;

@end
