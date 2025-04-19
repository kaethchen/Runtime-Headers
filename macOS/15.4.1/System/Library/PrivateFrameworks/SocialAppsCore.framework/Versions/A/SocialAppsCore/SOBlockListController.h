@class NSOrderedSet;

@interface SOBlockListController : NSObject

@property (retain) NSOrderedSet *soBlockItemList;
@property (retain) id cmfBlockListUpdatedObserver;
@property (retain) id abDatabaseChangedExternallyObserver;

+ (id)sharedBlockList;
+ (void *)_createCMFItemRefWithUnsanitizedAddress:(id)a0;
+ (Class)MKMapServiceClass;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)unblockAddress:(id)a0;
- (void)_buildBlockList;
- (id)_addressForCMItemRef:(void *)a0;
- (BOOL)_blockCMFItemRef:(void *)a0;
- (void)_unblockCMFItem:(void *)a0;
- (BOOL)addressIsBlocked:(id)a0;
- (BOOL)blockAddress:(id)a0;
- (BOOL)blockItem:(id)a0;
- (id)blockListItems;
- (BOOL)itemIsBlocked:(id)a0;
- (void)unblockItem:(id)a0;
- (id)blockPersonAlert;
- (void)listenToABNotifications;
- (void)removeABNotifications;

@end
