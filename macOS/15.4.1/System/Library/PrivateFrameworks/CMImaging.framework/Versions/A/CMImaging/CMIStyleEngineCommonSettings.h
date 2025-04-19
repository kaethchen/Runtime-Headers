@class NSDictionary;

@interface CMIStyleEngineCommonSettings : NSObject {
    NSDictionary *_configurationByUseCase;
    NSDictionary *_tuningParametersByUseCase;
}

@property (class, readonly) unsigned long long styleEngineSettingsVersion;

+ (id)configurationForUseCase:(unsigned long long)a0;
+ (id)tuningParametersForUseCase:(unsigned long long)a0;

- (void).cxx_destruct;

@end
