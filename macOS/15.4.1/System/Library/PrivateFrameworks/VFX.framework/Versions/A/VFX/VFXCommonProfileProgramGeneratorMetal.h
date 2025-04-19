@class NSString, NSArray;

@interface VFXCommonProfileProgramGeneratorMetal : VFXCommonProfileProgramGenerator {
    BOOL _allowHotReload;
    NSString *_originalSourceCode;
    NSArray *_injectionPointRanges;
    struct _NSRange { unsigned long long location; unsigned long long length; } _commonProfileIORange;
    NSString *_originalLightingSourceCode;
    NSArray *_lightingInjectionPointRanges;
}

- (void)dealloc;
- (int)profile;
- (void)_loadSourceCode;
- (struct __CFXFXProgram { } *)_newProgramWithHashCode:(struct __CFXProgramHashCode { } *)a0 engineContext:(struct __CFXEngineContext { } *)a1 introspectionDataPtr:(struct { long long x0; struct *x1; struct { long long x0; long long x1; } x2[4]; struct { long long x0; long long x1; } x3[4]; long long x4[4]; BOOL x5; } *)a2;
- (void)collectShaderForProgram:(struct __CFXFXProgram { } *)a0 hashCode:(id)a1 newVertexFunctionName:(id)a2 newFragmentFunctionName:(id)a3 sourceCodeBlock:(id /* block */)a4 additionalFileBlock:(id /* block */)a5;
- (void)emptyShaderCache;
- (id)initAllowingHotReload:(BOOL)a0;
- (id)splitInputOutputStructsIfNeededForSourceCode:(id)a0 generatedFromReplacementStrings:(id)a1 perPixelLighting:(BOOL)a2 clipDistanceCount:(unsigned long long)a3;

@end
