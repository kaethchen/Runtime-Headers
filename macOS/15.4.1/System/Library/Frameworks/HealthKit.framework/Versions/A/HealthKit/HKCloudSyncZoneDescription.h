@class NSString, NSArray, HKCloudSyncShareParticipantDescription, HKCloudSyncRecordZoneIDDescription;

@interface HKCloudSyncZoneDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKCloudSyncRecordZoneIDDescription *zoneIDDescription;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) HKCloudSyncShareParticipantDescription *ownerParticipantDescription;
@property (readonly, copy, nonatomic) NSArray *otherParticipantsDescription;
@property (readonly, copy, nonatomic) NSArray *recordDescriptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithZoneIDDescription:(id)a0 type:(id)a1 ownerParticipantDescription:(id)a2 otherParticipantsDescription:(id)a3 recordDescriptions:(id)a4;

@end
