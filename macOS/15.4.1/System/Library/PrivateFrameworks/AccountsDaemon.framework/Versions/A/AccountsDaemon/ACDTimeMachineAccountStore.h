@class ACDDatabase;

@interface ACDTimeMachineAccountStore : ACDAccountStore {
    ACDDatabase *_database;
}

- (void).cxx_destruct;
- (id)_save;
- (id)initWithClient:(id)a0 databaseConnection:(id)a1;
- (id)initWithTimeMachineSnapshotHomeFolderPath:(id)a0;

@end
