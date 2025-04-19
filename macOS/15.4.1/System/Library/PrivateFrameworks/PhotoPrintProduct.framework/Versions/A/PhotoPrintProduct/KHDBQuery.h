@class NSString, NSArray, KHDBDatabase, KHDBEntity, KHDBKCanceler;

@interface KHDBQuery : NSObject

@property (retain, nonatomic) NSString *where;
@property (retain, nonatomic) NSArray *args;
@property (retain, nonatomic) KHDBDatabase *db;
@property (retain, nonatomic) KHDBEntity *entity;
@property (retain, nonatomic) KHDBKCanceler *canceler;
@property (nonatomic) unsigned long long limit;

+ (id)queryFromDatabase:(id)a0 limit:(unsigned long long)a1 where:(id)a2;
+ (id)queryFromDatabase:(id)a0 where:(id)a1;
+ (id)queryFromDatabase:(id)a0 where:(id)a1 args:(id)a2;
+ (id)queryFromDatabase:(id)a0 withCanceler:(id)a1 limit:(unsigned long long)a2 where:(id)a3 args:(id)a4;
+ (id)queryFromDatabase:(id)a0 withCanceler:(id)a1 where:(id)a2;
+ (id)queryFromDatabase:(id)a0 withCanceler:(id)a1 where:(id)a2 args:(id)a3;
+ (id)queryFromEntity:(id)a0 limit:(unsigned long long)a1 where:(id)a2;
+ (id)queryFromEntity:(id)a0 where:(id)a1;
+ (id)queryFromEntity:(id)a0 where:(id)a1 args:(id)a2;
+ (id)queryFromEntity:(id)a0 withCanceler:(id)a1 limit:(unsigned long long)a2 where:(id)a3 args:(id)a4;
+ (id)queryFromEntity:(id)a0 withCanceler:(id)a1 where:(id)a2;
+ (id)queryFromEntity:(id)a0 withCanceler:(id)a1 where:(id)a2 args:(id)a3;
+ (id)queryWhere:(id)a0;

- (void)dealloc;
- (BOOL)hasLimit;
- (id)chooseEntityForModelClass:(Class)a0;

@end
