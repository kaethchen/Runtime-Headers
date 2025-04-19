@class NSMutableArray;

@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bundleIDs;

+ (Class)bundleIDType;

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
- (void)addBundleID:(id)a0;
- (id)bundleIDAtIndex:(unsigned long long)a0;
- (unsigned long long)bundleIDsCount;
- (void)clearBundleIDs;

@end
