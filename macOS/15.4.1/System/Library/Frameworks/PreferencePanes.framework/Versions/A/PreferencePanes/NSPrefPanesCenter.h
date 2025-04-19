@class NSString, NSMutableArray, NSMutableDictionary;

@interface NSPrefPanesCenter : NSObject {
    NSMutableArray *_ppBundles;
    NSMutableDictionary *_ppByIdentifier;
    unsigned long long _numIOPrefPanes;
    struct IONotificationPort { } *_notifyPort;
    unsigned int _ioIterator[16];
}

@property (readonly) NSString *serialNumber;

+ (id)preferencesDirectoryPath;
+ (id)pathOfPreferenceWithIdentifier:(id)a0;
+ (id)cacheFolderPathForDomain:(unsigned long long)a0;
+ (id)prefPanesDirectoriesIncludingSystem:(BOOL)a0;
+ (id)sharedPreferencesCenter;
+ (id)systemCacheFilePath;
+ (id)systemCacheFolderPath;
+ (id)userCacheFilePath;
+ (id)userCacheFolderPath;
+ (void)verifyAndUpdateSystemCache;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)serialNumber;
- (void)_updateCache;
- (id)_currentLanguage;
- (void)_checkHWForPreferences:(id)a0;
- (id)_prefPaneBundles;
- (id)_prefPaneBundlesWithHWCheckCompletionBlock:(id /* block */)a0;
- (id)_prefPanesByIdentifier;
- (id)_verifyAndReadCache;
- (id)_verifyAndReadSystemCacheSynchronous:(BOOL)a0;
- (void)_writeCache:(id)a0 isSystemCache:(BOOL)a1 synchronous:(BOOL)a2;
- (id)arrayOfPrefPaneIdentifiers;
- (id)buildCache:(BOOL)a0;
- (unsigned long long)indexOfPrefPane:(id)a0;
- (unsigned long long)indexOfPrefPaneWithBundlePath:(id)a0;
- (unsigned long long)indexOfPrefPaneWithIdentifier:(id)a0;
- (void)loadPreferencePanes:(id /* block */)a0;
- (unsigned long long)numberOfPrefPanes;
- (id)orderedPrefPanes;
- (id)prefPaneBundleAtIndex:(unsigned long long)a0;
- (id)prefPaneBundleForURLScheme:(id)a0;
- (id)prefPaneBundleWithIdentifier:(id)a0;
- (void)removePrefPaneFromCache:(id)a0;
- (void)updateCacheFileWithPrefPane:(id)a0;

@end
