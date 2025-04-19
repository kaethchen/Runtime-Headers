@class NSPredicate, NSDictionary;

@interface PKGraphicsHardwareRequirements : PKPredicateRequirements {
    NSDictionary *_symbolTable;
}

@property (retain) NSPredicate *requiredGLPredicate;
@property (retain) NSPredicate *requiredCLPredicate;
@property (retain) NSPredicate *requiredMetalPredicate;
@property BOOL requireSingleDevice;

- (void)dealloc;
- (BOOL)_evaluateForMetalOnly;
- (BOOL)_evaluateForOpenCLOnly;
- (BOOL)_evaluateForOpenGLVersion:(long long)a0 pixelFormatAttributes:(int *)a1;
- (void)_loadSymbolicConstants;
- (struct _CGLContextObject { } *)_newGLContextWithPixelFormatAttributes:(int *)a0 numberOfDevices:(int *)a1;
- (unsigned long long)_registryIDForOpenGLContext:(struct _CGLContextObject { } *)a0;
- (BOOL)areRequirementsMet;

@end
