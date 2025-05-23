@class NSString;

@interface ATXPBPersonaSessionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char starting : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPersonaUID;
@property (retain, nonatomic) NSString *personaUID;
@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;

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
