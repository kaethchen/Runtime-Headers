@interface SMUDataTemplateUtilities : NSObject

+ (BOOL)_forceAttributesOfSrcPath:(id)a0 toDstPath:(id)a1 error:(id *)a2;
+ (BOOL)_preserveAttributesFromDataTemplate:(id)a0 toDataTarget:(id)a1 error:(id *)a2;
+ (BOOL)copyDataTemplateWithSystemVolumePath:(id)a0 dataVolumePath:(id)a1 instantiateFirmlinks:(BOOL)a2 progressBlock:(id /* block */)a3 withError:(id *)a4;
+ (BOOL)copyDataTemplateWithSystemVolumePath:(id)a0 dataVolumePath:(id)a1 instantiateFirmlinks:(BOOL)a2 withError:(id *)a3;
+ (BOOL)copyDataTemplateWithSystemVolumePath:(id)a0 dataVolumePath:(id)a1 withError:(id *)a2;
+ (unsigned long long)determineTemplateSyncBetween:(id)a0 and:(id)a1;
+ (id)parseFirmlinkManifestForVolume:(id)a0 liveResolution:(BOOL)a1 withError:(id *)a2;
+ (id)parseFirmlinkManifestForVolume:(id)a0 withError:(id *)a1;
+ (id)systemVersionForMountPoint:(id)a0;

@end
