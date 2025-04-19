@class CHDeviceObserver, DBManager, NSString;

@interface CallDBManager : NSObject <CHDeviceObserverDelegate>

@property unsigned char dataStoreType;
@property (retain, nonatomic) CHDeviceObserver *deviceObserver;
@property (retain, nonatomic) DBManager *dbManager;
@property unsigned char notifyDataStoreChangeReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelURL;
+ (id)dataStoreName;
+ (id)getDBLocationIsSandboxed:(BOOL)a0 isTemporary:(BOOL)a1 error:(unsigned char *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (void)createDataStore;
- (void)createTemporary;
- (id)permDBLocation:(unsigned char *)a0;
- (void)createPermanent;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)didChangeBootLockEnabledForDeviceObserver:(id)a0;
- (void)handlePermanentCreated;
- (void)handleTemporaryCreated;
- (id)initWithDeviceObserver:(id)a0;
- (void)moveCallsFromTempDatabase;
- (BOOL)notifyDataStoreChanged;
- (BOOL)shouldCreatePermanent;
- (BOOL)shouldCreateTemporary;

@end
