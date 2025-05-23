@class NSData, HMPBAccessoryReference;

@interface HMPBServiceReference : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAccessoryReference;
@property (retain, nonatomic) HMPBAccessoryReference *accessoryReference;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSData *uniqueIdentifier;

+ (id)serviceReferenceWithData:(id)a0;
+ (id)serviceReferenceWithService:(id)a0;

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
