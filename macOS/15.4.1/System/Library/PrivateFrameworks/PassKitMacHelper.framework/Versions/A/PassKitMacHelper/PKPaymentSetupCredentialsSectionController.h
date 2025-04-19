@class NSHashTable, NSString, NSArray, PKPaymentProvisioningController, PKProvisioningSEStorageSnapshot, NSMutableDictionary, NSDictionary, PKPassSnapshotCoordinator, PKPaymentSetupProduct;
@protocol PKDynamicListDataChangeDelegate, PKPaymentSetupCredentialsSectionControllerDelegate;

@interface PKPaymentSetupCredentialsSectionController : NSObject <PKPaymentProvisioningControllerDelegate, PKDynamicSectionController> {
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    NSString *_lastBackedUpDefaultPaymentPassSerialNumber;
    NSArray *_sectionIdentifiers;
    NSMutableDictionary *_allCredentials;
    NSDictionary *_footerForSectionIdentifier;
    PKPaymentSetupProduct *_product;
    NSHashTable *_selectedCredentialsBeforeEditing;
    BOOL _isEditing;
    PKPassSnapshotCoordinator *_snapshotCoordinator;
    PKProvisioningSEStorageSnapshot *_storageSnapshot;
}

@property (nonatomic) unsigned long long maximumNumberOfSelectableCredentials;
@property (weak, nonatomic) id<PKPaymentSetupCredentialsSectionControllerDelegate> delegate;
@property (weak, nonatomic) id<PKDynamicListDataChangeDelegate> dataChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *identifiers;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0;
- (void)paymentPassUpdatedOnCredential:(id)a0;
- (void)provisioningControllerUpdatedPendingProvisioning:(id)a0;
- (id)selectedCredentials;
- (void)deleteItem:(id)a0;
- (BOOL)shouldShowEditButton;
- (void)_promptToDeleteItem:(id)a0 completion:(id /* block */)a1;
- (id)_cardArtForCredentialItem:(id)a0;
- (id)_detailTextForCredential:(id)a0;
- (BOOL)_hasCredentialsToShow;
- (BOOL)_isCarKeyProduct;
- (unsigned long long)_numberOfSelectedCredentials;
- (BOOL)_canSelectedCredential:(id)a0;
- (id)_credentialItemForCredential:(id)a0;
- (struct CGSize { double x0; double x1; })_defaultCardSize;
- (BOOL)_enumerateCredentials:(id /* block */)a0;
- (void)_loadCredentials:(id)a0 create:(BOOL)a1;
- (unsigned long long)_numberOfSelectedPeerPaymentCredentials;
- (void)_primeItemSelectionAndReloadData:(BOOL)a0;
- (void)_removeCredentialItem:(id)a0;
- (void)_replaceAndReloadItem:(id)a0 withNewItem:(id)a1;
- (BOOL)_setCredential:(id)a0 selected:(BOOL)a1 silently:(BOOL)a2;
- (void)_sortCredentialItems:(id)a0;
- (id)_titleTextForCredential:(id)a0;
- (void)_updateMaximumSelectableCredentials;
- (void)_updateRemoteCredentialCache;
- (id)availableCredentialRequiringAction;
- (struct { BOOL x0; BOOL x1; })credentialSelectionState;
- (void)didSelectItem:(id)a0;
- (BOOL)doesContainCredentialThatRequiresAuth:(id)a0;
- (id)footerForSectionIdentifier:(id)a0;
- (BOOL)hasSelectedCredentials;
- (id)headerForSectionIdentifier:(id)a0;
- (id)initWithCredentials:(id)a0 provisioningController:(id)a1 context:(long long)a2 product:(id)a3;
- (void)reloadCredentialStores;
- (void)setCredential:(id)a0 selected:(BOOL)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotForSectionIdentifier:(id)a0;
- (id)unselectedCredentialRequiringAction;

@end
