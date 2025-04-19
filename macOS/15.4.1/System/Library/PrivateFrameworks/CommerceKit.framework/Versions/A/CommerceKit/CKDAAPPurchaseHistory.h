@class NSString, CKStoreDAAPLibrary, NSMutableDictionary;

@interface CKDAAPPurchaseHistory : NSObject <CKStoreDAAPLibraryObserver>

@property (readonly) CKStoreDAAPLibrary *library;
@property (retain) NSMutableDictionary *observers;
@property (retain) id token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)addObserver:(id)a0;
- (id)initWithStoreClient:(id)a0;
- (void)pollForPurchasedItems:(BOOL)a0;
- (id)purchasedItems;
- (id)_purchaseFromDAAPItem:(id)a0;
- (void)storeDAAPLibrary:(id)a0 addedItems:(id)a1 removedItems:(id)a2;

@end
