@class NSString, NSDictionary, NSDate;

@interface CPLConfigurationDictionary : NSObject <NSCopying> {
    NSDictionary *_configuration;
}

@property (readonly, nonatomic) NSString *refreshIntervalKey;
@property (readonly, nonatomic) double minRefreshInterval;
@property (readonly, nonatomic) double refreshInterval;
@property (readonly, nonatomic) NSDate *lastUpdateDate;
@property (readonly, nonatomic, getter=isStale) BOOL stale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (BOOL)matchesConfigurationDictionary:(id)a0;
- (id)copyConfigurationDictionaryWithUpdatedDate;
- (id)copyConfigurationDictionaryWithUpdatedKey:(id)a0 value:(id)a1;
- (id)initWithConfiguration:(id)a0 refreshIntervalKey:(id)a1 minRefreshInterval:(double)a2 lastUpdateDate:(id)a3;
- (id)initWithConfigurationName:(id)a0 refreshIntervalKey:(id)a1 minRefreshInterval:(double)a2;
- (id)initWithContentsOfURL:(id)a0 refreshIntervalKey:(id)a1 minRefreshInterval:(double)a2 error:(id *)a3;
- (id)initWithData:(id)a0 refreshIntervalKey:(id)a1 minRefreshInterval:(double)a2 error:(id *)a3;

@end
