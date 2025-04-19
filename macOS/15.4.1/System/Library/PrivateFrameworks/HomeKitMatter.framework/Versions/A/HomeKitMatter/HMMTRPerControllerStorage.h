@class NSNumber, NSString, NSObject;
@protocol OS_dispatch_queue, HMMTRDeviceControllerStorageDataSource;

@interface HMMTRPerControllerStorage : HMFObject <MTRDeviceControllerStorageDelegate>

@property (readonly, nonatomic) NSNumber *fabricID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<HMMTRDeviceControllerStorageDataSource> privateDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (BOOL)controller:(id)a0 removeValueForKey:(id)a1 securityLevel:(unsigned long long)a2 sharingType:(unsigned long long)a3;
- (BOOL)controller:(id)a0 storeValue:(id)a1 forKey:(id)a2 securityLevel:(unsigned long long)a3 sharingType:(unsigned long long)a4;
- (BOOL)controller:(id)a0 storeValues:(id)a1 securityLevel:(unsigned long long)a2 sharingType:(unsigned long long)a3;
- (id)controller:(id)a0 valueForKey:(id)a1 securityLevel:(unsigned long long)a2 sharingType:(unsigned long long)a3;
- (id)valuesForController:(id)a0 securityLevel:(unsigned long long)a1 sharingType:(unsigned long long)a2;
- (id)initWithQueue:(id)a0 fabric:(id)a1;
- (id)initWithQueue:(id)a0 privateDataSource:(id)a1;

@end
