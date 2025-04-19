@class HMDHome, NSString;

@interface HMDCHIPControllerResidentNodeDataSource : HMFObject <HMMTRDeviceControllerStorageDataSource>

@property (weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)keyValueStore;
- (id)logIdentifier;
- (id)initWithHome:(id)a0;
- (BOOL)removeValueForKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)setValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;

@end
