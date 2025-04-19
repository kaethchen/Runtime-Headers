@class SHCatalogConfiguration;

@interface SHCatalog : NSObject

@property (readonly, copy) SHCatalogConfiguration *_configuration;
@property (readonly) double minimumQuerySignatureDuration;
@property (readonly) double maximumQuerySignatureDuration;

+ (BOOL)_validateInstallationID:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)_createMatcher;
- (id)_createSessionDriver;

@end
