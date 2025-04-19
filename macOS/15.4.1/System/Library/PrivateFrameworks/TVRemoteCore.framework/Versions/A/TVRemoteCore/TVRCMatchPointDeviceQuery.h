@class NSString, HMHomeManager, NSMutableDictionary;
@protocol TVRCServiceDeviceQueryDelegate, NSObject;

@interface TVRCMatchPointDeviceQuery : NSObject <HMHomeManagerDelegatePrivate>

@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) id<NSObject> homekitActiveAssertion;
@property (retain, nonatomic) NSMutableDictionary *deviceImplMap;
@property (weak, nonatomic) id<TVRCServiceDeviceQueryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManagerDidUpdateCurrentHome:(id)a0;
- (void)_matchPointServiceAdded:(id)a0;
- (void)_matchPointServiceNameChanged:(id)a0;
- (void)_matchPointServiceRemoved:(id)a0;
- (void)_notifyAddedService:(id)a0;
- (void)_notifyRemovedService:(id)a0;

@end
