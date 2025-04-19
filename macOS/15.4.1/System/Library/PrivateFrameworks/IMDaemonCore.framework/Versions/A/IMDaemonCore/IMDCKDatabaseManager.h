@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)manateeDataBase;
- (id)_nickNameContainer;
- (id)_nickNameContainerIdentifier;
- (BOOL)_serverSaysToUseOldContainer;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (id)nickNamePublicDatabase;
- (id)truthDatabase;
- (id)truthPublicDatabase;

@end
