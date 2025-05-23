@class NSString, NSData;

@interface NSPPrivacyProxyResolverInfo : PBCodable <NSCopying> {
    struct { unsigned char proxyIndex : 1; unsigned char weight : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDohURL;
@property (retain, nonatomic) NSString *dohURL;
@property (readonly, nonatomic) BOOL hasObliviousDoHConfig;
@property (retain, nonatomic) NSData *obliviousDoHConfig;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int weight;
@property (nonatomic) BOOL hasProxyIndex;
@property (nonatomic) unsigned int proxyIndex;

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
