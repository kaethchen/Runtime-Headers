@class NSString;

@interface _MRRequestDetailsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char startDate : 1; unsigned char qos : 1; unsigned char initiatorWasInferred : 1; unsigned char userInitiated : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInitiator;
@property (retain, nonatomic) NSString *initiator;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) BOOL hasQos;
@property (nonatomic) unsigned int qos;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) unsigned long long startDate;
@property (nonatomic) BOOL hasUserInitiated;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL hasInitiatorWasInferred;
@property (nonatomic) BOOL initiatorWasInferred;
@property (readonly, nonatomic) BOOL hasOriginatingBundleID;
@property (retain, nonatomic) NSString *originatingBundleID;

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

@end
