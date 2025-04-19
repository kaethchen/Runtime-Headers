@class NSArray, CKRecordZoneID, CKDDeviceCapabilityCheckResult, NSError;

@interface CKDDeviceCapabilityCheckPerRequestResult : NSObject

@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSArray *capabilitySet;
@property (copy, nonatomic) CKDDeviceCapabilityCheckResult *result;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithZoneID:(id)a0 capabilitySet:(id)a1 result:(id)a2 error:(id)a3;

@end
