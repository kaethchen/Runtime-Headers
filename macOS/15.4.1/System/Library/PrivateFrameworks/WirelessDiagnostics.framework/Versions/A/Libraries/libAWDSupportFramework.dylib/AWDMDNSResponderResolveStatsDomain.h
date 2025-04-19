@class NSString, NSMutableArray;

@interface AWDMDNSResponderResolveStatsDomain : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *hostnames;

+ (Class)hostnameType;

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
- (void)addHostname:(id)a0;
- (void)clearHostnames;
- (id)hostnameAtIndex:(unsigned long long)a0;
- (unsigned long long)hostnamesCount;

@end
