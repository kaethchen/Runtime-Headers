@class MCMUserIdentity, MCMManagedPath;

@interface MCMManagedUserPathRegistry : MCMManagedPathRegistry

@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) MCMManagedPath *userHome;
@property (readonly, nonatomic) MCMManagedPath *userLibrary;
@property (readonly, nonatomic) MCMManagedPath *userCaches;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserCaches;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserDeathrow;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserLibrary;
@property (readonly, nonatomic) MCMManagedPath *appScripts;
@property (readonly, nonatomic) MCMManagedPath *preferences;
@property (readonly, nonatomic) MCMManagedPath *autosave;
@property (readonly, nonatomic) MCMManagedPath *savedApplicationState;

- (void).cxx_destruct;
- (void)_initPathPropertiesWithUserIdentity:(id)a0;
- (id)initWithUserIdentity:(id)a0 daemonUser:(id)a1;

@end
