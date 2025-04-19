@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRSystemCommissionerPerControllerStorage : HMFObject <MTRDeviceControllerStorageDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *privateDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (BOOL)controller:(id)a0 removeValueForKey:(id)a1 securityLevel:(unsigned long long)a2 sharingType:(unsigned long long)a3;
- (BOOL)controller:(id)a0 storeValue:(id)a1 forKey:(id)a2 securityLevel:(unsigned long long)a3 sharingType:(unsigned long long)a4;
- (id)controller:(id)a0 valueForKey:(id)a1 securityLevel:(unsigned long long)a2 sharingType:(unsigned long long)a3;

@end
