@class NSString;

@interface ATXMPBBlendingCaptureRateTracker : PBCodable <NSCopying> {
    struct { unsigned char captureType : 1; unsigned char captured : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (nonatomic) BOOL hasCaptured;
@property (nonatomic) BOOL captured;
@property (nonatomic) BOOL hasCaptureType;
@property (nonatomic) int captureType;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (int)StringAsCaptureType:(id)a0;
- (id)captureTypeAsString:(int)a0;

@end
