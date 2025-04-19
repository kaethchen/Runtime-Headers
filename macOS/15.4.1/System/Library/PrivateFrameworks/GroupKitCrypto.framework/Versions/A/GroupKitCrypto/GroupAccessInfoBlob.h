@class NSData, NSUUID, NSString;

@interface GroupAccessInfoBlob : NSManagedObject

@property (nonatomic, copy) NSData *groupAccessInfo;
@property (nonatomic, copy) NSUUID *groupID;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic) long long version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
