@class SGSqlEntityStore;

@interface SGServiceContext : NSObject

@property (readonly, nonatomic) SGSqlEntityStore *store;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;

@end
