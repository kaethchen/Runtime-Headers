@class NSArray, NSMutableDictionary, NSHashTable, NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SFLLoginItemListV2 : NSObject <SFLList> {
    id _internalObservers;
    id _items;
    unsigned long long _seed;
    NSObject<OS_dispatch_queue> *_internalQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalObserverLock;
    NSObject<OS_dispatch_group> *_internalInitializeGroup;
}

@property (readonly) long long type;
@property (readonly) BOOL global;
@property (readonly) BOOL managed;
@property (readonly) NSMutableDictionary *btmItemsByUUID;
@property (readonly) NSHashTable *observers;
@property (readonly) unsigned long long seed;
@property (readonly, copy) NSArray *snapshotItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) NSString *identifier;
@property (readonly, copy) NSArray *allItems;
@property (copy) NSDictionary *properties;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)_cfTypeID;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)removeAllItems;
- (unsigned long long)indexOfItem:(id)a0;
- (void)_fetchItems;
- (void)_notifyObserverListInitialize:(id)a0;
- (void)_notifyObservers;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (BOOL)containsItem:(id)a0;
- (void)handleListChangeNotification:(id)a0;
- (void)handleUserDataDidChangeNotification:(id)a0;
- (BOOL)insertItem:(id)a0 afterItem:(id)a1 error:(id *)a2;
- (BOOL)insertItem:(id)a0 atIndex:(unsigned long long)a1 error:(id *)a2;
- (BOOL)moveItem:(id)a0 afterItem:(id)a1 error:(id *)a2;
- (BOOL)moveItem:(id)a0 toIndex:(unsigned long long)a1 error:(id *)a2;
- (BOOL)removeItem:(id)a0 error:(id *)a1;
- (BOOL)setPropertyValuesForKeysWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)updateItem:(id)a0 error:(id *)a1;

@end
