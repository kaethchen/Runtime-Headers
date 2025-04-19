@class HAPCharacteristicWriteRequestTuple, HAPCharacteristic, NSDictionary, MTRDevice, HMMTRDeviceTopology, HMMTRClusterDescription, NSString;

@interface HMMTRProtocolOperation : NSObject <HMFLogging>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HMMTRClusterDescription *characteristicDescription;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) NSDictionary *clusterIDCharacteristicMap;
@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (readonly, nonatomic) MTRDevice *matterDevice;
@property (nonatomic) unsigned long long handlingType;
@property (nonatomic) unsigned long long endpoint;
@property (retain) HAPCharacteristicWriteRequestTuple *writePrimaryRequestTuple;
@property (retain) HAPCharacteristicWriteRequestTuple *writeSecondaryRequestTuple;
@property (retain, nonatomic) HMMTRDeviceTopology *topology;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
