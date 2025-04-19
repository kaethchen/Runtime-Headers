@class NSString, NSMutableArray;

@interface NSPPrivacyProxyProxiedContentMap : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _proxies;
    struct { unsigned char percentEnabled : 1; unsigned char resolver : 1; unsigned char isPrivacyProxy : 1; unsigned char matchExactHostnames : 1; unsigned char supportsReverseProxying : 1; unsigned char systemProcessOnly : 1; } _has;
}

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long proxiesCount;
@property (readonly, nonatomic) unsigned int *proxies;
@property (retain, nonatomic) NSMutableArray *hostnames;
@property (retain, nonatomic) NSMutableArray *processes;
@property (nonatomic) BOOL hasSystemProcessOnly;
@property (nonatomic) BOOL systemProcessOnly;
@property (nonatomic) BOOL hasPercentEnabled;
@property (nonatomic) unsigned int percentEnabled;
@property (nonatomic) BOOL hasSupportsReverseProxying;
@property (nonatomic) BOOL supportsReverseProxying;
@property (retain, nonatomic) NSMutableArray *urls;
@property (nonatomic) BOOL hasResolver;
@property (nonatomic) unsigned int resolver;
@property (nonatomic) BOOL hasMatchExactHostnames;
@property (nonatomic) BOOL matchExactHostnames;
@property (nonatomic) BOOL hasIsPrivacyProxy;
@property (nonatomic) BOOL isPrivacyProxy;

+ (Class)hostnamesType;
+ (Class)processesType;
+ (Class)urlsType;

- (void)dealloc;
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
- (void)clearUrls;
- (unsigned long long)urlsCount;
- (void)clearHostnames;
- (unsigned long long)hostnamesCount;
- (void)addUrls:(id)a0;
- (id)urlsAtIndex:(unsigned long long)a0;
- (unsigned int)proxiesAtIndex:(unsigned long long)a0;
- (void)addHostnames:(id)a0;
- (void)addProcesses:(id)a0;
- (void)addProxies:(unsigned int)a0;
- (void)clearProcesses;
- (void)clearProxies;
- (id)hostnamesAtIndex:(unsigned long long)a0;
- (id)processesAtIndex:(unsigned long long)a0;
- (unsigned long long)processesCount;
- (void)setProxies:(unsigned int *)a0 count:(unsigned long long)a1;

@end
