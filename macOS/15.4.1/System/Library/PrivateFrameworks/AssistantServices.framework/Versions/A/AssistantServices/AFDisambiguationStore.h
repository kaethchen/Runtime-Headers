@class AFManagedStorageConnection;

@interface AFDisambiguationStore : NSObject {
    AFManagedStorageConnection *_store;
}

- (void).cxx_destruct;
- (void)reset;
- (id)_store;
- (id)infoForIdentifier:(id)a0;
- (void)saveInfo:(id)a0 forIdentifier:(id)a1;

@end
