@class IMLibraryPlist, NSObject;
@protocol OS_dispatch_queue;

@interface BLLibrary : NSObject

@property (retain, nonatomic) IMLibraryPlist *booksPlist;
@property (retain, nonatomic) IMLibraryPlist *purchasedPlist;
@property (retain, nonatomic) IMLibraryPlist *managedPlist;
@property (retain, nonatomic) IMLibraryPlist *sharedPlist;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (void)initialize;
+ (BOOL)_addDate:(id)a0 toPlist:(id)a1 bookItem:(id)a2 error:(id *)a3;
+ (id)_bookItemsFromPlist:(id)a0 sharedPlist:(id)a1;
+ (id)defaultBookLibrary;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)_addBookItemToEduContainer:(id)a0 error:(id *)a1;
- (BOOL)_addSharedBookToPurchasesPlistWithPermlink:(id)a0 error:(id *)a1;
- (id)_allPlists;
- (id)_bookItemFromPermlink:(id)a0 error:(id *)a1;
- (id)_bookItemFromStoreID:(id)a0 permlink:(id)a1 error:(id *)a2;
- (BOOL)_bookItemIsShared:(id)a0;
- (id)_bookItemsFromPlist:(id)a0;
- (void)_bookWasOpenedWithStoreID:(id)a0 permlink:(id)a1 date:(id)a2;
- (void)_downloadWithPermalink:(id)a0 title:(id)a1 result:(id /* block */)a2;
- (id)_findBookItemWithTestBlock:(id /* block */)a0 foundWhere:(long long *)a1;
- (id)_initWithBooksPlist:(id)a0 purchasedPlist:(id)a1 managedPlist:(id)a2 sharedPlist:(id)a3;
- (BOOL)_isMultiUser;
- (BOOL)_isShareableBook:(id)a0;
- (id)_list:(id)a0 testBlock:(id /* block */)a1;
- (id)_lookupBookItemExhaustiveFromPermlink:(id)a0 error:(id *)a1;
- (id)_perUserBookURLForBookURL:(id)a0;
- (BOOL)_removeBookFromLibraryWithPath:(id)a0 error:(id *)a1;
- (void)addITunesUBookToLibraryWithPermlink:(id)a0 title:(id)a1 result:(id /* block */)a2;
- (id)allBookItems;
- (id)bookIdentifierFromURL:(id)a0 error:(id *)a1;
- (BOOL)removeBookFromLibraryWithIdentifier:(id)a0 error:(id *)a1;

@end
