@class NSData, NSString;

@interface _MRPlaybackSessionProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlaybackSessionData;
@property (retain, nonatomic) NSData *playbackSessionData;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasRevision;
@property (retain, nonatomic) NSString *revision;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSData *metadata;

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
