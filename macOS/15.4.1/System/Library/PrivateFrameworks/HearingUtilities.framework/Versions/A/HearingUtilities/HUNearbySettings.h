@class NSObject, NSMutableDictionary, AXDispatchTimer;
@protocol OS_dispatch_queue;

@interface HUNearbySettings : HCSettings

@property (retain, nonatomic) NSMutableDictionary *collectedOutcomingData;
@property (retain, nonatomic) NSMutableDictionary *collectedIncomingData;
@property (retain, nonatomic) AXDispatchTimer *saveTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue;

+ (id)sharedInstance;
+ (id)timeStamp;
+ (id)dateFromTimeStamp:(id)a0;
+ (BOOL)isTimeStampExpired:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)shouldStoreLocally;
- (void)addCollectedData:(id)a0 toData:(id)a1 isOutcoming:(BOOL)a2;
- (void)addNewMessage:(id)a0 domain:(id)a1 numberData:(long long)a2 stringData:(id)a3 toDictionary:(id)a4;
- (void)cleanUpExpired:(id)a0 andSaveToData:(id)a1 forKey:(id)a2;
- (id)cleanUpExpiredFromSavedDomainData:(id)a0 isOutcoming:(BOOL)a1;
- (id)extractMessageIDsFromMessage:(id)a0;
- (void)incomingIDSMessage:(id)a0 domain:(id)a1 deviceType:(long long)a2 deviceTypeDescription:(id)a3;
- (void)incomingXPCMessageID:(unsigned long long)a0 fromPid:(int)a1;
- (void)processAndSaveCollectedDataWithCompletion:(id /* block */)a0;
- (void)processAndSaveCollectedTimeStamps;
- (void)saveCollectedDataWithCompletion:(id /* block */)a0;
- (id)savedData;
- (id)savedDataForKey:(id)a0 fromData:(id)a1;
- (void)sentIDSMessage:(id)a0 domain:(id)a1 priority:(unsigned long long)a2 priorityDescription:(id)a3;

@end
