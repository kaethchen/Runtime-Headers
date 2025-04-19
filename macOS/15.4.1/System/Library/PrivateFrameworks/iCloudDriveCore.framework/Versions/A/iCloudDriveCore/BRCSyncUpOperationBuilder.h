@class BRCUserDefaults, BRCLocalItem, NSMutableDictionary, NSData, BRCDirectoryItem, NSMutableSet, BRCSyncUpOperation;
@protocol BRCSessionContext;

@interface BRCSyncUpOperationBuilder : NSObject {
    NSMutableSet *_fullyChainedParentIDWhitelist;
    NSMutableSet *_halfChainedParentIDWhitelist;
    NSMutableDictionary *_parentItemIDToChildBasehashSalt;
    id<BRCSessionContext> _sessionContext;
    BRCUserDefaults *_defaults;
    BRCSyncUpOperation *_op;
}

@property (readonly, nonatomic) BRCLocalItem *itemNeedingPCSChaining;
@property (readonly, nonatomic) BRCDirectoryItem *itemNeedingBasehashSalting;
@property (readonly, nonatomic) NSData *rootChildBasehashSalt;

- (void).cxx_destruct;
- (float)addItem:(id)a0;
- (id)_getChildBasehashSaltForItemID:(id)a0;
- (BOOL)_checkIfShouldDedicateOpToPCSChainingItem:(id)a0;
- (BOOL)_checkIfShouldDedicateOpToSaltingBasehashItem:(id)a0;
- (id /* block */)_generateChildBasehashSaltGetterBlock;
- (id /* block */)_generateSaltGetterBlock;
- (id)_getChildBasehashSaltForItem:(id)a0;
- (id)_getSaltForItem:(id)a0;
- (BOOL)_recoverItemIDChangedWhileUploadingIfNecessary:(id)a0;
- (BOOL)_validateSharedDocumentFieldsForRecord:(id)a0 item:(id)a1;
- (float)addDeletionOfAlias:(id)a0;
- (float)addDeletionOfDirectory:(id)a0;
- (float)addDeletionOfDocument:(id)a0;
- (float)addDeletionOfFinderBookmark:(id)a0;
- (float)addDeletionOfItem:(id)a0;
- (float)addDeletionOfRecordID:(id)a0 ckInfo:(id)a1;
- (float)addDeletionOfSharedTopLevelItem:(id)a0;
- (float)addEditOfDirectory:(id)a0;
- (float)addEditOfDocument:(id)a0;
- (float)addEditOfFinderBookmark:(id)a0;
- (float)addEditOfSharedTopLevelItem:(id)a0;
- (float)addEditOfSymlink:(id)a0;
- (BOOL)checkIfSyncAllowedInSharedZoneForItem:(id)a0;
- (float)fakeSyncForItem:(id)a0 serverItem:(id)a1 inZone:(id)a2;
- (void)handleDeletionOfSharedItem:(id)a0;
- (void)handleEditOfSharedItem:(id)a0;
- (id)initWithSessionContext:(id)a0 syncUpOperation:(id)a1;
- (void)prepareAppLibraryRootSyncUpForItem:(id)a0;
- (unsigned char)shouldPCSChainStatusForItem:(id)a0;

@end
