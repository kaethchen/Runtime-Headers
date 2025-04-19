@class QCImagePort, CIFilter, NSMutableArray, CIKernel;

@interface QCImageKernel : QCProgrammablePatch {
    QCImagePort *outputImage;
    BOOL _advancedMode;
    BOOL _autoDOD;
    BOOL _samplerOptions;
    CIKernel *_ciKernel;
    CIFilter *_ciFilter;
    CIFilter *_ciJSFilter;
    NSMutableArray *_argumentCache;
    void *_jsContext;
    NSMutableArray *_kernels;
    NSMutableArray *_mainArguments;
    BOOL _jsSyntaxOK;
    BOOL _jsIsExecuting;
    BOOL _kernelsAreCompiling;
}

+ (void)initialize;
+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (BOOL)canInstantiateWithFile:(id)a0;
+ (int)indicesType;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)instantiateWithFile:(id)a0;
+ (id)sourceTypes;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (id)_compileKernels:(id)a0;
- (id)_executeScript:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (id)_executeMain:(id)a0 result:(id *)a1;
- (id)_filterMainSource:(id)a0;
- (void)_finalize_QCImageKernel;
- (id)_javascriptFromKernel:(id)a0;
- (struct OpaqueJSContext { } *)_jsContext;
- (id)_parseMain:(id)a0;
- (id)_setupKernelStandardMode:(id)a0;
- (id)attributesForParameterPortWithInfo:(id)a0 name:(id)a1 index:(unsigned long long)a2;
- (BOOL)automaticDOD;
- (void)cleanup:(id)a0;
- (id)compileSourceOfType:(id)a0;
- (id)createInputWithPortClass:(Class)a0 forKey:(id)a1 attributes:(id)a2 arguments:(id)a3 order:(unsigned long long)a4;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setAdvancedMode:(BOOL)a0;
- (void)setAutomaticDOD:(BOOL)a0;
- (void)setShowSamplerOptions:(BOOL)a0;
- (BOOL)showSamplerOptions;

@end
