@class PXGStringTextureProvider, PXGPPTStringsLayout;

@interface PXGPPTTextRenderingTester : NSObject <PXGTextureProviderDelegate>

@property (retain, nonatomic) PXGStringTextureProvider *stringTextureProvider;
@property (retain, nonatomic) PXGPPTStringsLayout *stringsLayout;
@property (copy, nonatomic) id /* block */ textureProviderDidProvideCGImageHandler;

- (void).cxx_destruct;
- (void)runRenderTextTestWithOptions:(id)a0 latencyMeter:(id)a1 completionHandler:(id /* block */)a2 failureHandler:(id /* block */)a3;
- (void)textureProvider:(id)a0 didProvideCGImage:(struct CGImage { } *)a1 options:(struct { BOOL x0; float x1; BOOL x2; })a2 adjustment:(id)a3 isDegraded:(BOOL)a4 forRequestID:(int)a5;
- (void)textureProvider:(id)a0 didProvideFailureWithError:(id)a1 forRequestID:(int)a2;
- (void)textureProvider:(id)a0 didProvideImageData:(id)a1 withSpecAtIndex:(long long)a2 size:(struct CGSize { double x0; double x1; })a3 bytesPerRow:(unsigned long long)a4 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 forRequestID:(int)a6;
- (void)textureProvider:(id)a0 didProvideNothingForRequestID:(int)a1;
- (void)textureProvider:(id)a0 didProvidePayload:(id)a1 forRequestID:(int)a2;
- (void)textureProvider:(id)a0 didProvidePixelBuffer:(struct __CVBuffer { } *)a1 options:(struct { BOOL x0; float x1; BOOL x2; })a2 adjustment:(id)a3 forRequestID:(int)a4;
- (id)textureProvider:(id)a0 requestRenderSnapshot:(struct { unsigned char x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })a1 offscreenEffect:(id)a2;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)a0;
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)a0;

@end
