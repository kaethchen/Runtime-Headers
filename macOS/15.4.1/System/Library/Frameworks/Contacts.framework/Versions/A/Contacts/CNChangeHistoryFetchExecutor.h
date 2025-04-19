@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)description;
- (void).cxx_destruct;
- (id)run:(id *)a0;
- (id)keysToFetch;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;
- (id)countOfDeltaSync;
- (id)deltaSync;
- (id)fetchCount:(id *)a0;
- (id)fetchEvents:(id *)a0;
- (id)fullSync;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (BOOL)validateFetchRequest;

@end
