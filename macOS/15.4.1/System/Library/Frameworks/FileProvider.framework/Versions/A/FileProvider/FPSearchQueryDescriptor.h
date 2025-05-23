@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor

@property (copy) NSString *searchQueryString;
@property (nonatomic, getter=isThirdPartySearchOnServer) BOOL thirdPartySearchOnServer;
@property (nonatomic) BOOL avoidCoreSpotlightSearch;

- (unsigned long long)hash;
- (id)name;
- (void).cxx_destruct;
- (id)_scopes;
- (void)augmentQueryContext:(id)a0;
- (BOOL)isEqualToItemQueryDescriptor:(id)a0;
- (BOOL)keepCollectorsAlive;
- (id)queryStringForMountPoint:(id)a0;

@end
