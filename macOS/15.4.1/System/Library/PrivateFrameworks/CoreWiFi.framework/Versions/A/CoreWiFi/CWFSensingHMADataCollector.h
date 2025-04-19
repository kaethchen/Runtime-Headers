@class NSString, NSDictionary, HMAccessory, NSError, NSObject;
@protocol OS_dispatch_queue, CWFSensingHMADataCollectorDelegate;

@interface CWFSensingHMADataCollector : NSObject <HMAccessoryDelegate>

@property (retain, nonatomic) NSDictionary *_sensingParams;
@property (retain, nonatomic) HMAccessory *_accessory;
@property (retain, nonatomic) NSError *_serviceRegistrationError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (retain, nonatomic) id<CWFSensingHMADataCollectorDelegate> _delegate;
@property (nonatomic) long long _attempt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCWFSensingHMADataCollectorFor:(id)a0 withOptions:(id)a1 andDelegate:(id)a2;

- (void).cxx_destruct;
- (void)accessory:(id)a0 service:(id)a1 didUpdateValueForCharacteristic:(id)a2;
- (id)currentRoomIdentifier;
- (void)deregisterForPrimaryServiceNotificationWith:(id /* block */)a0;
- (id)getSensingParams;
- (void)handleSensingResult:(id)a0;
- (id)initWithAccessory:(id)a0 andOptions:(id)a1 andDelegate:(id)a2;
- (void)registerForPrimaryServiceNotificationWith:(id /* block */)a0;

@end
