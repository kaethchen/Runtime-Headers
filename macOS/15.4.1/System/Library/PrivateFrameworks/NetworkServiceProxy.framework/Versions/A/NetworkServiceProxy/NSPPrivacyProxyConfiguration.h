@class NSPPrivacyProxyResolverInfo, NSString, NSPPrivacyProxyAuthenticationInfo, NSMutableArray;

@interface NSPPrivacyProxyConfiguration : PBCodable <NSCopying> {
    struct { unsigned char disableUntil : 1; unsigned char preferredPathEnabledPercentage : 1; unsigned char enabled : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasDisableUntil;
@property (nonatomic) unsigned long long disableUntil;
@property (retain, nonatomic) NSPPrivacyProxyAuthenticationInfo *authInfo;
@property (retain, nonatomic) NSMutableArray *policyTierMaps;
@property (retain, nonatomic) NSMutableArray *proxies;
@property (retain, nonatomic) NSMutableArray *pathWeights;
@property (retain, nonatomic) NSMutableArray *resolvers;
@property (nonatomic) unsigned int maxTokenNum;
@property (retain, nonatomic) NSMutableArray *fallbackPathWeights;
@property (readonly, nonatomic) BOOL hasRegionId;
@property (retain, nonatomic) NSString *regionId;
@property (readonly, nonatomic) BOOL hasBootstrapResolver;
@property (retain, nonatomic) NSPPrivacyProxyResolverInfo *bootstrapResolver;
@property (readonly, nonatomic) BOOL hasDnsProbe;
@property (retain, nonatomic) NSString *dnsProbe;
@property (retain, nonatomic) NSMutableArray *obliviousConfigs;
@property (nonatomic) BOOL hasPreferredPathEnabledPercentage;
@property (nonatomic) unsigned int preferredPathEnabledPercentage;
@property (retain, nonatomic) NSMutableArray *proxiedContentMaps;
@property (retain, nonatomic) NSMutableArray *trustedNetworkDiscoveredProxies;

+ (Class)pathWeightsType;
+ (Class)fallbackPathWeightsType;
+ (Class)obliviousConfigsType;
+ (Class)policyTierMapType;
+ (Class)proxiedContentMapsType;
+ (Class)proxiesType;
+ (Class)resolversType;
+ (Class)trustedNetworkDiscoveredProxiesType;

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
- (id)proxiesAtIndex:(unsigned long long)a0;
- (void)addPathWeights:(id)a0;
- (void)addFallbackPathWeights:(id)a0;
- (void)addObliviousConfigs:(id)a0;
- (void)addPolicyTierMap:(id)a0;
- (void)addProxiedContentMaps:(id)a0;
- (void)addProxies:(id)a0;
- (void)addResolvers:(id)a0;
- (void)addTrustedNetworkDiscoveredProxies:(id)a0;
- (void)clearFallbackPathWeights;
- (void)clearObliviousConfigs;
- (void)clearPathWeights;
- (void)clearPolicyTierMaps;
- (void)clearProxiedContentMaps;
- (void)clearProxies;
- (void)clearResolvers;
- (void)clearTrustedNetworkDiscoveredProxies;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)fallbackPathWeightsCount;
- (id)obliviousConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)obliviousConfigsCount;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)pathWeightsCount;
- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (unsigned long long)policyTierMapsCount;
- (id)proxiedContentMapsAtIndex:(unsigned long long)a0;
- (unsigned long long)proxiedContentMapsCount;
- (unsigned long long)proxiesCount;
- (id)resolversAtIndex:(unsigned long long)a0;
- (unsigned long long)resolversCount;
- (id)trustedNetworkDiscoveredProxiesAtIndex:(unsigned long long)a0;
- (unsigned long long)trustedNetworkDiscoveredProxiesCount;

@end
