@class NSString;

@interface AWDWiFiUIConfigureEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char previousType : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasProcess;
@property (retain, nonatomic) NSString *process;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasPreviousType;
@property (nonatomic) unsigned int previousType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
