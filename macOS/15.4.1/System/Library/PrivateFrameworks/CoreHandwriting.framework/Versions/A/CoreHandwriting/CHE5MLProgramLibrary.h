@class VisionCoreE5RTProgramLibrary;

@interface CHE5MLProgramLibrary : NSObject {
    VisionCoreE5RTProgramLibrary *_programLibrary;
}

@property (readonly) VisionCoreE5RTProgramLibrary *visionCoreProgramLibrary;

+ (id)E5RTProgramLibraryCompilationOptionsForModelSource:(id)a0;
+ (id)E5RTProgramLibraryForModelURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithModelURL:(id)a0 error:(id *)a1;

@end
