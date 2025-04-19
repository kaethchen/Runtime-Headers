@class HMAccessory, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSensingAutoDataCollector : NSObject

@property (retain, nonatomic) NSMutableDictionary *_serviceObjects;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (retain, nonatomic) HMAccessory *_currentAccessory;

+ (id)sharedCWFSensingAutoDataCollectorInstanceWith:(id)a0;

- (void).cxx_destruct;
- (void)cleanUpOutOfScopeAccessory;
- (BOOL)currentAccessoryInfo:(id)a0;
- (id)initWithHomes:(id)a0;
- (void)registerForAccessoriesInRoomWithDelegate:(id)a0;
- (void)updateRegisteredServiceWithDelegate:(id)a0;

@end
