@class CNContactStore, AKCardViewDataSource, ABCommandExecutor, CNContainer;
@protocol ABCardViewSaveHelperDelegate;

@interface ABCardViewSaveHelper : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) BOOL isSaving;
@property (nonatomic) BOOL hasSaved;
@property (retain, nonatomic) AKCardViewDataSource *dataSource;
@property (retain, nonatomic) ABCommandExecutor *commandExecutor;
@property (retain, nonatomic) CNContainer *parentContainer;
@property (nonatomic) BOOL isContactNewlyCreated;
@property (nonatomic) BOOL ignoresGuardianRestrictions;
@property (weak, nonatomic) id<ABCardViewSaveHelperDelegate> delegate;

- (void).cxx_destruct;
- (void)save;
- (void)executeCommand:(id)a0;
- (id)initWithContactStore:(id)a0;
- (BOOL)canSave;
- (BOOL)hasPhotoChanges;
- (void)addNewPersonToStoreDataSourceChanges;
- (void)addPerson;
- (void)applyProperties:(id)a0 fromContact:(id)a1 toContact:(id)a2;
- (id)contactByApplyingChangesFromContact:(id)a0 toContact:(id)a1;
- (BOOL)dataSourceHasNonLinkChanges;
- (void)deletePeople;
- (void)deleteUnsavedContact;
- (BOOL)hasNameChanges;
- (id)makeAddCommandForContacts:(id)a0 toContainer:(id)a1;
- (id)makeDeleteCommandForDeletedContacts:(id)a0;
- (id)makeLinkCommandForContacts:(id)a0 linkIdentifier:(id)a1;
- (id)makeNewPersonToStoreDataSourceChanges;
- (id)makeSetImageCommandForContact:(id)a0;
- (id)makeUpdateCommandForUpdatedContacts:(id)a0;
- (void)preferForNameContact:(id)a0 inContacts:(id)a1;
- (void)preferForPhotoContact:(id)a0 inContacts:(id)a1;
- (id)propertiesToSetOnNewPerson;
- (void)saveDataSourceWithChanges;
- (void)saveEmptyDataSource;
- (BOOL)shouldAddNewPersonToStoreDataSourceChanges;
- (void)updatePeople;

@end
