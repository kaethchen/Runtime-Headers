@class NSString;

@interface NTPBExternalAnalyticsEventSend : PBCodable <NSCopying> {
    struct { unsigned char externalAnalyticsEventType : 1; unsigned char resultType : 1; } _has;
}

@property (nonatomic) BOOL hasExternalAnalyticsEventType;
@property (nonatomic) int externalAnalyticsEventType;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (readonly, nonatomic) BOOL hasEventUdid;
@property (retain, nonatomic) NSString *eventUdid;
@property (readonly, nonatomic) BOOL hasFailureReasonCode;
@property (retain, nonatomic) NSString *failureReasonCode;
@property (readonly, nonatomic) BOOL hasContentViewedId;
@property (retain, nonatomic) NSString *contentViewedId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasExternalAnalyticsId;
@property (retain, nonatomic) NSString *externalAnalyticsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
