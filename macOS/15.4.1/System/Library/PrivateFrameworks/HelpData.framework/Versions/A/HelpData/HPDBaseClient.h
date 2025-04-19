@class NSDictionary, NSSet;

@interface HPDBaseClient : NSObject

@property (readonly, copy) NSDictionary *bookList;
@property (readonly) NSSet *indexedBookIDs;

- (BOOL)performQuery:(id)a0;
- (BOOL)cancelQuery:(id)a0;
- (id)bookWithIdentifier:(id)a0;
- (BOOL)registerBookWithIdentifier:(id)a0 appBundleURL:(id)a1 bookVersion:(id)a2 bookURL:(id)a3;

@end
