@interface CIRenderInfo : NSObject {
    void *_priv;
}

@property (readonly) double kernelExecutionTime;
@property (readonly) double kernelCompileTime;
@property (readonly) long long passCount;
@property (readonly) long long pixelsProcessed;

+ (id)renderInfoWithCompletedTask:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (long long)pixelsOverdrawn;
- (id)_pdfDataRepresentation;
- (id)initWithCompletedTask:(id)a0;
- (long long)kernelExecutionCycles;

@end
