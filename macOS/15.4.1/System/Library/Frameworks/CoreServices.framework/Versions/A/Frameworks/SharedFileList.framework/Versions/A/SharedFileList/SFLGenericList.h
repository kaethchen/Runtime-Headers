@class NSDictionary, NSArray, NSMutableDictionary, NSHashTable, _SFLList, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SFLGenericList : NSObject <SFLList, SFLOrderedSet, SFLInsertOrderedSet> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalObserverLock;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *initializationQueue;

@property (retain) _SFLList *internalList;
@property (retain) id notifyToken;
@property (readonly) NSHashTable *internalObservers;
@property (copy, nonatomic) NSArray *internalItems;
@property (retain) NSMutableDictionary *itemsByIdentifier;
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
- (id)_items;
- (unsigned long long)indexOfItem:(id)a0;
- (unsigned long long)seed;
- (BOOL)_addItem:(id)a0 error:(id *)a1;
- (void)_removeAllItems;
- (BOOL)openItem:(id)a0 error:(id *)a1;
- (id)_fetchList;
- (unsigned long long)_indexForInsertOfItems:(id)a0 afterItem:(id)a1;
- (unsigned long long)_indexOfItem:(id)a0;
- (BOOL)_insertItem:(id)a0 afterItem:(id)a1 error:(id *)a2;
- (BOOL)_insertItem:(id)a0 atIndex:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_moveItem:(id)a0 afterItem:(id)a1 error:(id *)a2;
- (BOOL)_moveItem:(id)a0 toIndex:(unsigned long long)a1 error:(id *)a2;
- (void)_notifyObserverListInitialize:(id)a0;
- (void)_notifyObserversListDidChange;
- (BOOL)_originatorAuditTokenMatchesThisProcess:(id)a0;
- (BOOL)_removeItemWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_setPropertyValuesForKeysWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)_updateItem:(id)a0 error:(id *)a1;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (id)allItems;
- (BOOL)containsItem:(id)a0;
- (void)handleListChangeNotification:(id)a0;
- (BOOL)insertItem:(id)a0 afterItem:(id)a1 error:(id *)a2;
- (BOOL)insertItem:(id)a0 atIndex:(unsigned long long)a1 error:(id *)a2;
- (BOOL)moveItem:(id)a0 afterItem:(id)a1 error:(id *)a2;
- (BOOL)moveItem:(id)a0 toIndex:(unsigned long long)a1 error:(id *)a2;
- (BOOL)removeItem:(id)a0 error:(id *)a1;
- (id)resolveItemWithIdentifier:(id)a0 options:(unsigned long long)a1 relativeToURL:(id)a2;
- (void)resolveItemWithIdentifier:(id)a0 options:(unsigned long long)a1 relativeToURL:(id)a2 completion:(id /* block */)a3;
- (BOOL)setPropertyValuesForKeysWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)updateItem:(id)a0 error:(id *)a1;

@end
