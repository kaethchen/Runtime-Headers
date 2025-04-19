@class EDReadLaterCloudStorage, EDPersistenceDatabase, EDPersistenceHookRegistry;

@interface EDReadLaterPersistence : NSObject <EDReadLaterCloudStorageDateProvider>

@property (retain, nonatomic) EDPersistenceDatabase *database;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic) EDReadLaterCloudStorage *cloudStorage;

- (void).cxx_destruct;
- (void)_persistDisplayDate:(id)a0 message:(id)a1 connection:(id)a2;
- (void)_persistReadLater:(id)a0 date:(id)a1 displayDate:(id)a2;
- (id)cloudStorageReadLaterDateForMessage:(id)a0 displayDate:(id *)a1;
- (id)initWithDatabase:(id)a0 hookRegistry:(id)a1;
- (void)persistReadLaterForMessage:(id)a0 date:(id)a1 displayDate:(id)a2;
- (void)removeReadLaterForMessage:(id)a0;
- (void)scheduleRecurringActivity;

@end
