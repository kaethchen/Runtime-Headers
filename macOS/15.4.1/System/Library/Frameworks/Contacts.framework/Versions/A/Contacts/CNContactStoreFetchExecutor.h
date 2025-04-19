@class CNContactStore, CNResult, NSString;

@interface CNContactStoreFetchExecutor : NSObject <CNFetchRequestVisitor>

@property (readonly) CNContactStore *store;
@property (retain) CNResult *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0;
- (void)visitChangeHistoryFetchRequest:(id)a0;
- (id)countForFetchRequest:(id)a0;
- (id)initWithContactStore:(id)a0;
- (void)visitContactFetchRequest:(id)a0;

@end
