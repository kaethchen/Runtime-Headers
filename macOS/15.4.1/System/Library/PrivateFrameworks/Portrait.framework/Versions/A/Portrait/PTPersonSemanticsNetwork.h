@class PTMetalContext, NSString, PTEffectUtil, PTEspressoGenericExecutor;
@protocol MTLTexture;

@interface PTPersonSemanticsNetwork : NSObject {
    PTEspressoGenericExecutor *_executor;
    PTMetalContext *_metalContext;
    id<MTLTexture> _inRGBA;
    id<MTLTexture> _outSkinMask;
    id<MTLTexture> _outPersonMask;
    NSString *_inRGBAName;
    PTEffectUtil *_effectUtil;
}

- (void).cxx_destruct;
- (unsigned int)executeNetwork:(id)a0;
- (id)espressoFileURLFor:(id)a0 prefix:(id)a1 chipId:(id)a2;
- (id)inRGBA;
- (id)initWithMetalContext:(id)a0 effectUtil:(id)a1 sharedResources:(id)a2;
- (id)outPersonMask;
- (id)outSkinMask;

@end
