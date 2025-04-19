@interface CNCDPersistenceStack : NSObject {
    id /* block */ _backendProvider;
}

@property id notificationSource;

+ (void)_createContactsDirectoryIfNeededAtURL:(id)a0;
+ (id)accountIdentifierForManagedObject:(id)a0;
+ (id)accountIdentifierFromPersistentStoreURL:(id)a0;
+ (id)defaultAccountCollection;
+ (id)defaultContactsStoreDirectoryURL;
+ (id)os_log_t;
+ (id)persistenceStackWithAccountCollection:(id)a0;
+ (id)persistenceStackWithInMemoryBackend;

- (void).cxx_destruct;
- (id)initWithBackendProvider:(id /* block */)a0;
- (id)makePersistenceContext;

@end
