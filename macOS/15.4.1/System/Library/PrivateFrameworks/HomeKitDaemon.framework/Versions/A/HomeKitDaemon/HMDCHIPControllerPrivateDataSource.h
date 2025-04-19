@class HMDHome, NSNumber, NSString;

@interface HMDCHIPControllerPrivateDataSource : HMFObject <HMMTRDeviceControllerStorageDataSource>

@property (weak) HMDHome *home;
@property (weak) NSNumber *controllerNodeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)logIdentifier;
- (id)allKeyValuePairs;
- (id)initWithHome:(id)a0 nodeID:(id)a1;
- (BOOL)removeValueForKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)setKeyValuePairs:(id)a0 completion:(id /* block */)a1;
- (BOOL)setValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;

@end
