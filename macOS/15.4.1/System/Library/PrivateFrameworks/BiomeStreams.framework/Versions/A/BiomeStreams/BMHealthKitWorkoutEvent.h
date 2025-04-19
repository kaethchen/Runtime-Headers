@class NSString;

@interface BMHealthKitWorkoutEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isFirstPartyDonation;
@property (readonly, nonatomic) BOOL isIndoor;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *activityUUID;
@property (nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) BOOL isUpdate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithIsFirstPartyDonation:(BOOL)a0 isIndoor:(BOOL)a1 activityType:(id)a2 activityUUID:(id)a3 eventType:(unsigned long long)a4;
- (id)initWithIsFirstPartyDonation:(BOOL)a0 isIndoor:(BOOL)a1 activityType:(id)a2 activityUUID:(id)a3 eventType:(unsigned long long)a4 isUpdate:(BOOL)a5;
- (id)initWithProto:(id)a0;

@end
