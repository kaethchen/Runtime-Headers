@class NSDictionary, NSString;
@protocol ISVariantResourceProviderProtocol;

@interface ISCompositVariantResourceLayer : NSObject <ISCompositVariantResourceLayerProtocol>

@property (retain) NSDictionary *layerInfo;
@property (weak) id<ISVariantResourceProviderProtocol> resourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isActiveAtSize:(long long)a0;
- (BOOL)applyToContext:(struct CGContext { } *)a0 size:(unsigned long long)a1 scale:(unsigned long long)a2;
- (BOOL)drawResource:(id)a0 context:(struct CGContext { } *)a1 size:(unsigned long long)a2 scale:(unsigned long long)a3;
- (void)drawText:(id)a0 context:(struct CGContext { } *)a1 size:(unsigned long long)a2 scale:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithLayerInfo:(id)a0 resourceProvider:(id)a1;
- (BOOL)maskWithResource:(id)a0 context:(struct CGContext { } *)a1 size:(unsigned long long)a2 scale:(unsigned long long)a3;

@end
