@interface COMAPPLEPROACTIVEGMSGMSError : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char errorType : 1; } _has;
}

@property (nonatomic) BOOL hasErrorType;
@property (nonatomic) int errorType;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned long long errorCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsErrorType:(id)a0;
- (id)errorTypeAsString:(int)a0;

@end
