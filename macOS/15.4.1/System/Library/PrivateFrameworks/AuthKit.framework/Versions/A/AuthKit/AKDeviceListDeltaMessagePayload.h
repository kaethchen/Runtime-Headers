@class NSString, NSArray, NSDate;

@interface AKDeviceListDeltaMessagePayload : NSObject

@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, copy, nonatomic) NSString *machineID;
@property (readonly, copy, nonatomic) NSArray *machineIDs;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long removalReason;

- (void).cxx_destruct;
- (long long)_removalReasonFromPayloadValue:(id)a0;
- (unsigned long long)_operationFromPayloadValue:(id)a0;
- (id)_timestampFromPayloadValue:(id)a0;
- (id)initWithResponseBody:(id)a0;

@end
