@class NSString;

@interface ABDefaultAccountPermissions : NSObject <ABAccountPermissions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAccountPermissions;

- (BOOL)canCreateGroups;
- (BOOL)canCreatePeople;
- (BOOL)canRemoveGroup:(id)a0;
- (BOOL)canDeletePeople;
- (BOOL)canRenameGroup:(id)a0;
- (BOOL)canEditGroup:(id)a0;
- (BOOL)canEditPerson:(id)a0;
- (BOOL)groupsCanRemoveMembers;

@end
