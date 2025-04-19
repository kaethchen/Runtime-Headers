@class NSPersistentStore, PFUbiquityLocation, NSPersistentStoreCoordinator, PFUbiquityMetadataFactoryFilePresenter;

@interface PFUbiquityMetadataFactoryEntry : NSObject {
    PFUbiquityLocation *_metadataStoreFileLocation;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithMetadataStoreFileLocation:(id)a0;

@end
