@class HMDResidentSelectionInfo, NSUUID, NSDictionary, HMDPreferredResidentsList, HMDHomeKitVersion, NSNumber;

@interface HMDUnpublishedResidentStatus : NSObject

@property (readonly, nonatomic) NSDictionary *channelRecordPayload;
@property (readonly, nonatomic) HMDHomeKitVersion *swVersion;
@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly, nonatomic) HMDPreferredResidentsList *preferredResidentsList;
@property (readonly, nonatomic) NSNumber *locationRawValue;
@property (readonly, nonatomic) HMDResidentSelectionInfo *selectionInfo;
@property (readonly, nonatomic) unsigned long long networkConnectionType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithVersion:(id)a0 generationID:(id)a1 preferredResidentsList:(id)a2 selectionInfo:(id)a3 connectionType:(unsigned long long)a4 locationRawValue:(id)a5;

@end
