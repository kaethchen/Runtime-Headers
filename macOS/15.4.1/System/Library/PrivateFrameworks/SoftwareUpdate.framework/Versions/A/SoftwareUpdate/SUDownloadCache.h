@class NSString, NSFileManager, NSObject;
@protocol OS_dispatch_queue;

@interface SUDownloadCache : NSObject <NSFileManagerDelegate> {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSFileManager *_fileManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultDirectoryAttributes;
+ (id)_defaultFileAttributes;
+ (id)appCacheDirectory;
+ (id)defaultCache;
+ (id)getCacheQueue;
+ (id)partialDownloadURLForURL:(id)a0;
+ (id)remainingPackageIdentifiersToInstallForProductKey:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)fileManager:(id)a0 shouldProceedAfterError:(id)a1 movingItemAtURL:(id)a2 toURL:(id)a3;
- (unsigned long long)downloadedSizeForPackageReference:(id)a0 withProductKey:(id)a1;
- (unsigned long long)downloadedSizeForProduct:(id)a0;
- (BOOL)emptyCache;
- (id)moveFromDownloadLocation:(id)a0 toCacheForURL:(id)a1 error:(id *)a2;

@end
