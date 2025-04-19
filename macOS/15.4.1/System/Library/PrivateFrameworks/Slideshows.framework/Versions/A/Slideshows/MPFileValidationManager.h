@interface MPFileValidationManager : NSObject

+ (void)checkFileExtension:(id)a0 isAudio:(BOOL *)a1 isImage:(BOOL *)a2 isVideo:(BOOL *)a3;
+ (void)checkSpotlightFileType:(id)a0 isAudio:(BOOL *)a1 isImage:(BOOL *)a2 isVideo:(BOOL *)a3;
+ (id)resolveAliasPath:(id)a0;
+ (BOOL)validateFiles:(id)a0 allowAudio:(BOOL)a1 allowImages:(BOOL)a2 allowMovies:(BOOL)a3 extensionsOnly:(BOOL)a4;
+ (BOOL)validateFilesForAudio:(id)a0 extensionsOnly:(BOOL)a1;
+ (BOOL)validateFilesForImages:(id)a0 extensionsOnly:(BOOL)a1;
+ (BOOL)validateFilesForMovies:(id)a0 extensionsOnly:(BOOL)a1;

@end
