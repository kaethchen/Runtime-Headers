@interface CRE5MLUtilities : NSObject

+ (id)E5RTProgramLibraryCompilationOptionsForModelSource:(id)a0;
+ (id)E5RTProgramLibraryForModelURL:(id)a0 error:(id *)a1;
+ (id)newE5RTExecutionOutputsForFunctionDescriptor:(id)a0 error:(id *)a1;
+ (id)newImageInputsForFunctionDescriptor:(id)a0 croppedPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
+ (id)newInputsForFunctionDescriptor:(id)a0 surface:(struct __IOSurface { } *)a1 isImage:(BOOL)a2 error:(id *)a3;

@end
