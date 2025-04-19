@class HMDResidentSelectionInfo, NSUUID, NSString, HMDPreferredResidentsList, NSDate, NSNumber, HMDHomeKitVersion;

@interface HMDResidentStatus : NSObject

@property (readonly, nonatomic) NSNumber *locationRawValue;
@property (readonly, nonatomic) NSUUID *idsIdentifier;
@property (readonly, nonatomic) NSString *idsDestination;
@property (readonly, nonatomic) HMDHomeKitVersion *swVersion;
@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly, nonatomic) HMDPreferredResidentsList *preferredResidentsList;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) HMDResidentSelectionInfo *selectionInfo;
@property (readonly, nonatomic) unsigned long long networkConnectionType;
@property (readonly, nonatomic) NSDate *assertionTime;
@property (readonly, nonatomic) BOOL isPrimary;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasChangedFrom:(id)a0;
- (id)initWithChannelRecord:(id)a0;
- (id)initWithIDSIdentifier:(id)a0 idsDestination:(id)a1 version:(id)a2 generationID:(id)a3 assertionTime:(id)a4 preferredResidentsList:(id)a5 selectionInfo:(id)a6 connectionType:(unsigned long long)a7 locationRawValue:(id)a8;
- (id)matchingDeviceFromResidentDevices:(id)a0;

@end
