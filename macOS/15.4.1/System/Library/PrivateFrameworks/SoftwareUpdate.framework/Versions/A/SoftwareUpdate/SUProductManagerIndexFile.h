@class NSObject;
@protocol OS_dispatch_queue;

@interface SUProductManagerIndexFile : NSObject {
    NSObject<OS_dispatch_queue> *_updateQueue;
}

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (id)_allProductKeys;
- (BOOL)_flushUpdatesIndexToDisk:(id)a0;
- (id)_pathForProductKey:(id)a0;
- (id)_productKeysToAutomaticallyInstallLater;
- (id)_productKeysToInstallAtLogout;
- (void)_setPath:(id)a0 forProductKey:(id)a1;
- (void)_setProductKeysToAutomaticallyInstallLater:(id)a0;
- (void)_setProductKeysToInstallAtLogout:(id)a0;
- (id)_updatesIndexDict;

@end
