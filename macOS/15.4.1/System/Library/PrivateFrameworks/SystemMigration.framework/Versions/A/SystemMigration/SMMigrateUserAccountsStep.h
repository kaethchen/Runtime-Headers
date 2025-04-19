@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface SMMigrateUserAccountsStep : SMEngineStep <DMAsyncDelegate>

@property (retain) NSArray *usersToReplace;
@property (retain) NSObject<OS_dispatch_semaphore> *dmWaitingSem;

- (id)description;
- (void).cxx_destruct;
- (id)process;
- (id)prepare;
- (void)dmAsyncFinishedForDisk:(struct __DADisk { } *)a0 mainError:(int)a1 detailError:(int)a2 dictionary:(id)a3;
- (void)dmAsyncMessageForDisk:(struct __DADisk { } *)a0 string:(id)a1 dictionary:(id)a2;
- (void)dmAsyncProgressForDisk:(struct __DADisk { } *)a0 barberPole:(BOOL)a1 percent:(float)a2;
- (void)dmAsyncStartedForDisk:(struct __DADisk { } *)a0;
- (void)updatePreboot;
- (id)authorizeExistingTokenUserInDB:(id)a0 returningError:(id *)a1;
- (void)calculateDeletedSize;
- (BOOL)enableFDEReturningError:(id *)a0;
- (id)fdeUsersToAdd;
- (id)getBiometricKitReference;
- (BOOL)requiresSecureTokenOperations;
- (void)setupUsersToReplace;
- (id)transferUserAccounts;
- (void)updateFDE;

@end
