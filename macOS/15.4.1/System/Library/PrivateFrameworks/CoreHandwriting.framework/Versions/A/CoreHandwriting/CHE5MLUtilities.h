@interface CHE5MLUtilities : NSObject

+ (struct __IOSurface { } *)createInputSurfaceForMultiArray:(id)a0;
+ (id)createInputSurfacesForFeatureProvider:(id)a0;
+ (id)featureProviderForE5RTOutputs:(id)a0 functionDescriptor:(id)a1 dataType:(long long)a2 error:(id *)a3;
+ (id)multiArrayForOutput:(id)a0 inNamedObjects:(id)a1 functionDescriptor:(id)a2 dataType:(long long)a3 error:(id *)a4;
+ (id)newE5RTExecutionOutputsForFunctionDescriptor:(id)a0 error:(id *)a1;
+ (id)newInputsForFunctionDescriptor:(id)a0 surfaces:(id)a1 error:(id *)a2;

@end
