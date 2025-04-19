@class NSString, NSUUID;

@interface GDHMUserMock : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *uniqueIdentifier;
@property (copy, nonatomic) NSString *userID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)asHMUser;

@end
