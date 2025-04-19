@interface _MLTInMemoryModelLoader : NSObject

+ (id)createInMemoryModel:(id)a0 blobFileResolutionOption:(long long)a1 withModelConfiguration:(id)a2 error:(id *)a3;
+ (id)modelAssetFromModelSpecAtURL:(id)a0 blobFileResolutionOption:(long long)a1 error:(id *)a2;
+ (id)modelSpecURLFromModelPath:(id)a0 error:(id *)a1;

@end
