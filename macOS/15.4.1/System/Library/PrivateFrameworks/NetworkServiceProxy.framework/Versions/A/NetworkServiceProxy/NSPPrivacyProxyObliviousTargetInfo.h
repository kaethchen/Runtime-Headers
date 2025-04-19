@class NSString, NSMutableArray;

@interface NSPPrivacyProxyObliviousTargetInfo : PBCodable <NSCopying> {
    struct { unsigned char proxyIndex : 1; unsigned char weight : 1; } _has;
}

@property (retain, nonatomic) NSString *targetHost;
@property (retain, nonatomic) NSString *proxyURLPath;
@property (nonatomic) BOOL hasProxyIndex;
@property (nonatomic) unsigned int proxyIndex;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int weight;
@property (retain, nonatomic) NSMutableArray *processes;

+ (Class)processesType;

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
- (void)addProcesses:(id)a0;
- (void)clearProcesses;
- (id)processesAtIndex:(unsigned long long)a0;
- (unsigned long long)processesCount;

@end
