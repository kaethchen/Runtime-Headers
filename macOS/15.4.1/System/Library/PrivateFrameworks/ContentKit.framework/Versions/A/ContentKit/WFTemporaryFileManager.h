@interface WFTemporaryFileManager : NSObject

+ (id)temporaryDirectoryURL;
+ (id)appGroupIdentifier;
+ (void)clearTemporaryFiles;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (void)configureBackupFlagIfNecessary;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)createSharedDirectoryIfNecessary;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (BOOL)isTemporaryFile:(id)a0;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (void)setUpDirectories;
+ (id)sharedAppGroupDirectoryURL;
+ (id)sharedShortcutsAppGroupDirectoryURL;
+ (id)sharedTemporaryDirectoryURL;
+ (id)topLevelTemporaryDirectoryURL;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;

@end
