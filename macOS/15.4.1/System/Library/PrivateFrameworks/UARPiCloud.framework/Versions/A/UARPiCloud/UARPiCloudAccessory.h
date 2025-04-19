@class NSUUID, NSString, UARPiCloudAccessoryRecord, CHIPAccessoryFirmwareRecord, NSMutableArray;

@interface UARPiCloudAccessory : NSObject <NSCopying>

@property (readonly) NSUUID *uuid;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (readonly) NSString *firmwareVersion;
@property BOOL signatureValidationNeeded;
@property (copy) NSMutableArray *availableRecords;
@property (retain) UARPiCloudAccessoryRecord *record;
@property (retain) CHIPAccessoryFirmwareRecord *chipFirmwareRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2;
- (id)initWithUUID:(id)a0 productGroup:(id)a1 productNumber:(id)a2 firmwareVersion:(id)a3;

@end
