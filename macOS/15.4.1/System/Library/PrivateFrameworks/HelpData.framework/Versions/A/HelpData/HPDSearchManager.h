@class NSMapTable, NSDictionary, NSSet, HPDClient, NSObject;
@protocol OS_dispatch_queue;

@interface HPDSearchManager : NSObject

@property (retain) HPDClient *client;
@property (retain) NSMapTable *clientMap;
@property (retain) NSDictionary *cachedBooks;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, copy) NSDictionary *bookList;
@property (readonly) NSSet *indexedBookIDs;

+ (id)new;
+ (BOOL)isClient;
+ (id)sharedSearchManager;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)cancelQuery:(id)a0;
- (id)_clientForDelegate:(id)a0;
- (id)_delegateForClient:(id)a0;
- (id)bookContainingFileAtPath:(id)a0;
- (id)bookWithIdentifier:(id)a0;
- (id)cachedBookList;
- (id)cachedBookWithIdentifier:(id)a0;
- (BOOL)cancelQuery:(id)a0 withDelegate:(id)a1;
- (void)client:(id)a0 helpQuery:(id)a1 didEncounterError:(id)a2;
- (void)client:(id)a0 helpQuery:(id)a1 didReturnActions:(id)a2;
- (void)client:(id)a0 helpQuery:(id)a1 didReturnResults:(id)a2;
- (void)client:(id)a0 helpQuery:(id)a1 didReturnSuggestions:(id)a2;
- (void)client:(id)a0 helpQueryDidFinishSearching:(id)a1;
- (BOOL)isHelpBookRegisteredForProductName:(id)a0;
- (BOOL)performQuery:(id)a0 withDelegate:(id)a1;
- (id)productNamesForRegisteredHelpBooks;
- (BOOL)registerBookWithIdentifier:(id)a0 appBundleURL:(id)a1 bookVersion:(id)a2 bookURL:(id)a3;
- (BOOL)searchForString:(id)a0 inBooks:(id)a1 withDelegate:(id)a2 options:(id)a3;
- (BOOL)searchForString:(id)a0 inBooks:(id)a1 withDelegate:(id)a2 options:(id)a3 contextInfo:(const void *)a4;

@end
