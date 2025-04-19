@class NSString, _LSDatabase, NSError;

@interface LSMIResultRegistrantServerDatabaseContextProviding : NSObject <LSRegistrantDatabaseContextProviding> {
    struct Context { struct LSContext *_contextPointer; struct LSContext { _LSDatabase *db; } _contextStorage; BOOL _created; NSError *_error; } _ctx;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)armSaveTimerIfNecessary:(id /* block */)a0;
- (id)databaseContextWithError:(id *)a0;

@end
