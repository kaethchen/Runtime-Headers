@class CNCDSaveContext;

@interface CNCDGroupMembershipSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;

- (void).cxx_destruct;
- (void)addGroupMembers;
- (void)removeSubgroups;
- (void)addSubgroups;
- (id)allContactIdentifiers;
- (id)allGroupIdentifiers;
- (void)enumerateCoreDataGroupsAndMembers:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateCoreDataGroupsAndSubgroups:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithSaveContext:(id)a0;
- (void)removeGroupMembers;
- (void)saveGroupMemberships;

@end
