@interface VCDiskUtils : NSObject

+ (BOOL)createDefaultDirectoryIfNeeded:(id)a0;
+ (BOOL)checkAttributesForDirectory:(id)a0;
+ (BOOL)createDefaultCacheDirectoryIfNeeded;
+ (BOOL)createDefaultLogDirectoryIfNeeded;
+ (id)getCachesDirectoryPath;
+ (id)getDefaultLogDumpPath;
+ (BOOL)setAttributesForDirectory:(id)a0;

@end
