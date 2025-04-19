@class NSArray;

@interface ShaderGraphService : NSObject

@property (class, nonatomic, readonly) NSArray *builtInGeometryPropertyNames;

+ (id)materialWithArchiveData:(id)a0 error:(id *)a1;
+ (id)metalLibraryFromMaterial:(id)a0 forDevice:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)archiveMaterial:(id)a0 error:(id *)a1;
+ (id)materialFromGraph:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)materialFromGraph:(id)a0 error:(id *)a1;
+ (id)metalLibraryFromMaterial:(id)a0 forDevice:(id)a1 error:(id *)a2;

- (id)init;

@end
