@class NSString;

@interface AWDIDSNoteMessageReceived : PBCodable <NSCopying> {
    struct { unsigned char localtimedelta : 1; unsigned char servertimestamp : 1; unsigned char timestamp : 1; unsigned char accountType : 1; unsigned char fromStorage : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasAccountType;
@property (nonatomic) int accountType;
@property (nonatomic) BOOL hasFromStorage;
@property (nonatomic) BOOL fromStorage;
@property (readonly, nonatomic) BOOL hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) BOOL hasServertimestamp;
@property (nonatomic) unsigned long long servertimestamp;
@property (nonatomic) BOOL hasLocaltimedelta;
@property (nonatomic) unsigned long long localtimedelta;

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
