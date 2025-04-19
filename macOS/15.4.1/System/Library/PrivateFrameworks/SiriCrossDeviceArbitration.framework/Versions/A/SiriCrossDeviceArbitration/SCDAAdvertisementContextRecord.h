@class NSData, NSUUID;

@interface SCDAAdvertisementContextRecord : NSObject

@property (readonly, nonatomic) unsigned char advertisementContextVersion;
@property (readonly, nonatomic) long long advertisementRecordType;
@property (readonly, nonatomic) double voiceTriggerEndTime;
@property (readonly, copy, nonatomic) NSData *advertisementPayload;
@property (readonly, copy, nonatomic) NSUUID *deviceID;
@property (readonly, copy, nonatomic) NSUUID *electionParticipantId;
@property (nonatomic) double advertisementDispatchTime;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_advertisementPayloadSizeForVersion:(unsigned char)a0;
- (char)_getAdvertisementRecordTypeForVersion:(unsigned char)a0 data:(id)a1;
- (id)_getDeviceIdForVersion:(unsigned char)a0 data:(id)a1;
- (id)_getMyriadAdvertisementDataForVersion:(unsigned char)a0 data:(id)a1;
- (double)_getVoiceTriggerEndTimeForVersion:(unsigned char)a0 data:(id)a1;
- (void)_initializeMyriadAdvertisementContextRecordFromData:(id)a0;
- (BOOL)compareAdvertisementPayload:(id)a0;
- (id)initWithMyriadAdvertisementContextRecordData:(id)a0;
- (BOOL)isSaneForVoiceTriggerEndTime:(double)a0 endtimeDistanceThreshold:(double)a1;
- (id)myriadAdvertisementContextAsData;
- (id)recordForDeviceId:(id)a0;
- (id)_UUIDFromBytes:(const unsigned char[16] *)a0;
- (id)_getElectionParticipantIdForVersion:(unsigned char)a0 data:(id)a1;
- (id)initWithAdvertisementRecordType:(long long)a0 voiceTriggerEndTime:(double)a1 advertisementPayload:(id)a2 deviceID:(id)a3 electionParticipantId:(id)a4;

@end
