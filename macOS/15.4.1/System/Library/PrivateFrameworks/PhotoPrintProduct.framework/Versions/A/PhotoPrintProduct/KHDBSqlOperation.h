@class KHDBEntity, NSArray;

@interface KHDBSqlOperation : NSOperation

@property (readonly, retain, nonatomic) KHDBEntity *entity;
@property (readonly, retain, nonatomic) id updateSql;
@property (readonly, retain, nonatomic) NSArray *args;

- (void)dealloc;
- (id)description;
- (void)run;
- (void)main;
- (id)initWithEntity:(id)a0 updateSql:(id)a1 args:(id)a2;

@end
