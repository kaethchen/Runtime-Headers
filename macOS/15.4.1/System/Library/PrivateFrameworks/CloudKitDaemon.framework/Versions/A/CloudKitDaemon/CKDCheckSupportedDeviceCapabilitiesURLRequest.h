@class NSArray, CKDeviceCapabilityCheckOptions, NSMutableDictionary;

@interface CKDCheckSupportedDeviceCapabilitiesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSArray *desiredCapabilitySets;
@property (retain, nonatomic) CKDeviceCapabilityCheckOptions *options;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *capabililitySetsByRequestID;
@property (copy, nonatomic) id /* block */ supportedDeviceCapabilitiesCheckedForZoneBlock;
@property (copy, nonatomic) id /* block */ errorFromServerBlock;
@property (copy, nonatomic) id /* block */ errorFromClientValidationBlock;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 zoneIDs:(id)a1 desiredCapabilitySets:(id)a2 options:(id)a3;
- (void)reportClientValidationError:(id)a0 forZoneID:(id)a1 capabilitySet:(id)a2;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;

@end
