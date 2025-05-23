@class NSString, NSMutableArray;

@interface PDSProtoBatchRegisterResp : PBCodable <NSCopying> {
    struct { unsigned char responseTtl : 1; unsigned char retryInterval : 1; unsigned char serverTimestamp : 1; } _has;
}

@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSMutableArray *userPushTokenRegResponses;
@property (nonatomic) BOOL hasResponseTtl;
@property (nonatomic) long long responseTtl;
@property (nonatomic) BOOL hasRetryInterval;
@property (nonatomic) long long retryInterval;
@property (nonatomic) BOOL hasServerTimestamp;
@property (nonatomic) long long serverTimestamp;

+ (Class)userPushTokenRegResponsesType;

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
- (void)addUserPushTokenRegResponses:(id)a0;
- (void)clearUserPushTokenRegResponses;
- (id)userPushTokenRegResponsesAtIndex:(unsigned long long)a0;
- (unsigned long long)userPushTokenRegResponsesCount;

@end
