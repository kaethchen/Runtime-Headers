@class NSNumber, NSUUID;

@interface CKDAssetVolume : CKObject

@property (retain, nonatomic) NSNumber *volumeIndex;
@property (retain, nonatomic) NSUUID *volumeUUID;

+ (id)CKSQLiteClassName;

- (id)description;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;

@end
