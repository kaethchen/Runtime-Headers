@class NSUUID, NSDate;

@interface HDDatabasePruningShowDeletedSample : NSObject

@property (readonly, nonatomic) long long rowID;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long syncIdentity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRowID:(long long)a0 identifier:(id)a1 creationDate:(id)a2 startDate:(id)a3 endDate:(id)a4 syncIdentity:(long long)a5;

@end
