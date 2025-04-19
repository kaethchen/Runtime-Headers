@class NSBundle, FigMetalContext;
@protocol MTLLibrary, MTLDevice;

@interface CMIFFTContext : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) id<MTLLibrary> library;
@property (readonly, nonatomic) FigMetalContext *figMetalContext;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)prewarmWithTuningParameters:(id)a0;
- (id)initWithFigMetalContext:(id)a0;

@end
