@class NSDictionary;

@interface ProviderConfiguration : NSObject

@property (nonatomic) BOOL providerOff;
@property (readonly, nonatomic) BOOL socialEngineeringThreatTypeOff;
@property (readonly, nonatomic) BOOL malwareThreatTypeOff;
@property (readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff;
@property (readonly, nonatomic) BOOL useV5BatchGet;
@property (readonly, nonatomic) BOOL proxyOff;
@property (readonly, nonatomic) BOOL useV5;
@property (readonly, copy, nonatomic) NSDictionary *configuration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (void)_configureToBeOff;
- (void)_configureToUseDefaultValues;
- (void)_parseConfiguration:(id)a0;

@end
