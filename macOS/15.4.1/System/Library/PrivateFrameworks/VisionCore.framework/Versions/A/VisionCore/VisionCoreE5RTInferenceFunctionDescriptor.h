@class VisionCoreE5RTFunction, VisionCoreProcessingDescriptorSpecifier;

@interface VisionCoreE5RTInferenceFunctionDescriptor : VisionCoreInferenceNetworkDescriptor

@property (readonly, nonatomic) VisionCoreProcessingDescriptorSpecifier *specifier;
@property (retain, nonatomic) VisionCoreE5RTFunction *function;

+ (id)descriptorForProgramLibrary:(id)a0 functionName:(id)a1 inputImageName:(id)a2 outputNames:(id)a3 confidencesOutputName:(id)a4 labelsFileName:(id)a5 error:(id *)a6;
+ (id)loadOrCompileProgramLibrary:(id)a0 modelBaseName:(id)a1 e5rtComputeDeviceType:(unsigned long long)a2 supportedOnANEFrom:(long long)a3 fullyANEResidentFrom:(long long)a4 allowCompilation:(BOOL)a5 error:(id *)a6;
+ (id)descriptorForProgramLibraryName:(id)a0 functionName:(id)a1 inputImageName:(id)a2 outputNames:(id)a3 confidencesOutputName:(id)a4 labelsFileName:(id)a5 error:(id *)a6;
+ (id)networkVersionForProgramLibrary:(id)a0 function:(id)a1;

- (void).cxx_destruct;
- (id)initWithFunction:(id)a0 inputDescriptors:(id)a1 inputImageDescriptors:(id)a2 outputDescriptors:(id)a3 confidencesOutputDescriptors:(id)a4 networkVersion:(id)a5;

@end
