@interface SGREMaterialCompilationOptions : NSObject {
    void /* unknown type, empty encoding */ enableFailedCompileMaterial;
    void /* unknown type, empty encoding */ forceEnableTier1FallbackSupport;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ workingColorSpace;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkingColorSpace:(struct CGColorSpace { } *)a0;

@end
