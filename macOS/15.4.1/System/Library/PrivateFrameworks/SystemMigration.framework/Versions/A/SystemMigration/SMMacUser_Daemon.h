@class NSLock, NSURL, SMDBEntry, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface SMMacUser_Daemon : SMUser_Daemon {
    NSMutableSet *_userExcludedPathList;
    NSURL *_cachedAbsHomeDir;
    NSURL *_picturePath;
    NSNumber *_cachedHomeDirSize;
    NSLock *_cachedHomeDirSizeLock;
    BOOL _calculatingHome;
    BOOL _homeDirSearchComplete;
    BOOL _homeDirToBeCopiedByMigration;
    BOOL _needsAttention;
}

@property (retain) NSMutableArray *allOtherFilesInDirectory;
@property (retain) SMDBEntry *backing;
@property BOOL isAdminUser;
@property (retain) NSObject<OS_dispatch_queue> *sizingQueue;
@property (retain) NSObject<OS_dispatch_queue> *excludablePathQueue;
@property (retain) NSMutableDictionary *cachedStatsByPath;
@property (readonly, getter=isDisabled) BOOL disabled;
@property (readonly, getter=isSecureTokenAuth) BOOL secureTokenAuth;
@property BOOL isAutoLoginUser;
@property BOOL shouldUseAlternateFileVaultHomeDirPath;

+ (id)filevaultAlternateHomeDirPath:(id)a0;
+ (id)pathsToNeverCopy;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)password;
- (unsigned int)uid;
- (id)UUID;
- (Class)clientClass;
- (id)fullDescription;
- (id)authenticationType;
- (unsigned int)gid;
- (id)fullName;
- (id)picturePath;
- (id)entriesForKey:(id)a0;
- (id)relativeHomeDir;
- (void)setHomeDirSize:(id)a0;
- (BOOL)__homeDirToBeCopiedByMigration;
- (id)_fileVaultImagePath;
- (id)_getEntry:(id)a0 atIndex:(int)a1;
- (id)_initWithEntry:(id)a0 fromSystem:(id)a1;
- (id)accountPicture;
- (void)addUserExcludedPath:(id)a0;
- (void)addUserExcludedPaths:(id)a0;
- (void)calculateHomeDirSizeWithPather:(id)a0 callbackBlock:(id /* block */)a1;
- (void)clearHomeDirectoryCaches;
- (id)currentAbsolutePathToHomeDir;
- (BOOL)dontNeedToCopyUserHome;
- (id)embeddedDSPicture;
- (id)extraString:(id)a0 withColor:(id)a1;
- (BOOL)filevault;
- (id)filevaultAlternateHomeDirPath;
- (BOOL)hasUserExcludedPath:(id)a0;
- (BOOL)homeDirIsRedirected;
- (id)homeDirOnNetworkSystem;
- (id)homeDirSize;
- (BOOL)homeDirToBeCopiedByMigration;
- (id)iCloudIdentifiers;
- (id)iCloudName;
- (id)iCloudNames;
- (BOOL)isRoleUser;
- (id)modernICloudNames;
- (id)oldICloudNames;
- (id)passwordFilePath;
- (id)pathsExcludableByTheUserWithPather:(id)a0;
- (id)pathsExcluded;
- (id)pathsExcludedByTheUser;
- (id)picturePathFromDB;
- (BOOL)portableHomeUser;
- (void)removeUserExcludedPath:(id)a0;
- (id)statsForDataToCopySizingQueueWithPather:(id)a0;
- (id)statsForDataToCopyWithPather:(id)a0;
- (id)statsForHomeDirectoryWithPather:(id)a0;
- (id)statsForSubPath:(id)a0 withPather:(id)a1;

@end
