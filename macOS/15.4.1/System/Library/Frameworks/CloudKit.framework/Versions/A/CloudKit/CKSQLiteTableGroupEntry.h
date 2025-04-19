@class NSString, NSDictionary, NSDate, NSNumber;

@interface CKSQLiteTableGroupEntry : NSObject

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastUsed;
@property (copy, nonatomic) NSString *creatingClass;
@property (copy, nonatomic) NSDictionary *groupData;

+ (double)expirationTime;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (BOOL)isExpired;
- (void)deleteTables:(id)a0;

@end
