@protocol WBSProfileProviding;

@interface WBSProfileDataManager : NSObject

@property (readonly, nonatomic) id<WBSProfileProviding> profileProvider;

- (id)init;
- (void).cxx_destruct;
- (void)didRemoveProfile:(id)a0;
- (void)didRemoveProfileWithServerID:(id)a0 profileIdentifier:(id)a1;
- (void)ensureProfileDirectoriesExistForProfileWithServerID:(id)a0 profileIdentifier:(id)a1;
- (id)initWithProfileProvider:(id)a0;

@end
