@class PLPhotoLibraryPathManager;

@interface PLDirectoryJournal : NSObject <PLJournalPayloadEnumeration> {
    PLPhotoLibraryPathManager *_pathManager;
    Class _payloadClass;
}

@property (readonly, nonatomic) Class payloadClass;

- (void).cxx_destruct;
- (id)baseURLCreateIfNeeded:(BOOL)a0;
- (BOOL)enumeratePayloadsUsingBlock:(id /* block */)a0 error:(id *)a1;
- (id)initWithPathManager:(id)a0 payloadClass:(Class)a1;
- (BOOL)persistManagedObject:(id)a0 error:(id *)a1;
- (BOOL)removeAllPersistenceFilesWithError:(id *)a0;
- (BOOL)removePersistenceForManagedObject:(id)a0 error:(id *)a1;
- (BOOL)shouldPersistManagedObject:(id)a0;

@end
