@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CIMResourcePathManager : NSObject {
    BOOL _rebuildResourcePaths;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct __FSEventStream { } *stream;
@property (readonly, nonatomic) NSMutableDictionary *updateDictionaryPaths;

+ (id)sharedResourcePathManager;
+ (id)userDictionaryURL;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addUpdateDictionaryPath:(id)a0 forInputModePrefix:(id)a1;
- (void)additionalDictionariesUpdated;
- (id)combinedResourcePathsForKeys:(id)a0 inputMode:(id)a1;
- (void)rebuildUpdateResourcePaths:(id)a0;
- (id)resourcePathsForKey:(id)a0 inputMode:(id)a1;
- (id)resourcePathsForUpdateDictionaries:(id)a0;
- (void)setUpDirectoryNotificationChangesForPath:(id)a0;
- (void)tearDownDirectoryNotificationChangesForPath;

@end
