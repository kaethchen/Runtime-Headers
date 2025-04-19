@interface ABCDContainerPermissions : NSObject

@property (readonly, nonatomic) BOOL canCreateContacts;
@property (readonly, nonatomic) BOOL canDeleteContacts;
@property (readonly, nonatomic) BOOL canCreateGroups;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCanCreateContacts:(BOOL)a0 canDeleteContacts:(BOOL)a1 canCreateGroups:(BOOL)a2;

@end
