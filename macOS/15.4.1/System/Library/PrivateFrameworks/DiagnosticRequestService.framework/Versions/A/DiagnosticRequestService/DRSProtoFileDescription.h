@class NSString;

@interface DRSProtoFileDescription : PBCodable <NSCopying> {
    struct { unsigned char logSize : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLogType;
@property (retain, nonatomic) NSString *logType;
@property (nonatomic) BOOL hasLogSize;
@property (nonatomic) unsigned long long logSize;
@property (readonly, nonatomic) BOOL hasFileName;
@property (retain, nonatomic) NSString *fileName;

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
