@class NSString;

@interface BMPBHealthKitWorkoutEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; unsigned char isFirstPartyDonation : 1; unsigned char isIndoor : 1; unsigned char isUpdate : 1; } _has;
}

@property (nonatomic) BOOL hasIsFirstPartyDonation;
@property (nonatomic) BOOL isFirstPartyDonation;
@property (nonatomic) BOOL hasIsIndoor;
@property (nonatomic) BOOL isIndoor;
@property (readonly, nonatomic) BOOL hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasActivityUUID;
@property (retain, nonatomic) NSString *activityUUID;
@property (nonatomic) BOOL hasIsUpdate;
@property (nonatomic) BOOL isUpdate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEventType:(id)a0;
- (id)eventTypeAsString:(int)a0;

@end
