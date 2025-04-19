@class NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface CKDUpdateDeviceCapabilitiesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSString *deviceCapabilitiesSaveRequestID;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *shareIDByRequestID;
@property (retain, nonatomic) NSArray *supportedCapabilities;
@property (retain, nonatomic) NSDictionary *zoneUsages;
@property (retain, nonatomic) NSDictionary *shareUsages;
@property (copy, nonatomic) id /* block */ deviceCapabilitiesUpdatedBlock;
@property (copy, nonatomic) id /* block */ zoneUsageUpdatedBlock;
@property (copy, nonatomic) id /* block */ shareUsageUpdatedBlock;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 supportedCapabilities:(id)a1 zoneUsages:(id)a2 shareUsages:(id)a3;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;

@end
