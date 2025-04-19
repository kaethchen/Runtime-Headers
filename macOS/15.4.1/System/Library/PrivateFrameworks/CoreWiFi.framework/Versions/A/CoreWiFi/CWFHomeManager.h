@class NSMutableDictionary, HMFLocationAuthorization, HMHomeManager, CWFSensingAutoDataCollector, NSObject, NSString;
@protocol OS_dispatch_queue, CWFHomeManagerDelegate, NSObject;

@interface CWFHomeManager : NSObject <HMHomeManagerDelegate, HMHomeDelegate>

@property (retain, nonatomic) HMHomeManager *_homeManager;
@property (nonatomic) BOOL _isHomeInformationAvailable;
@property (retain, nonatomic) NSMutableDictionary *_serviceObjects;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (retain, nonatomic) id<NSObject> _activeAssertion;
@property (retain, nonatomic) HMFLocationAuthorization *_homeLocationAuthorization;
@property (retain, nonatomic) CWFSensingAutoDataCollector *_autoDataColletor;
@property (retain, nonatomic) id<CWFHomeManagerDelegate> _delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cwfHomeManagerWithDelegate:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (int)registerForAccessoryStateChange:(id)a0 withParams:(id)a1 forCWFHMServiceType:(long long)a2;
- (int)createServiceObjectFor:(long long)a0 withParams:(id)a1 andAccessory:(id)a2;
- (id)getServiceEvents;
- (id)getServiceTypeStringFor:(long long)a0;
- (BOOL)initHomeManagerInstance;
- (void)removeObjectForServieType:(long long)a0 withUUID:(id)a1;

@end
