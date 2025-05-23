@interface PGConfiguration : NSObject

@property (readonly, nonatomic) double version;

+ (id)name;
+ (id)_persistedConfigurationPath;
+ (id)persistedConfiguration;

- (id)description;
- (id)propertyKeys;
- (id)_configurationDictionary;
- (void)_configureWithSource:(id)a0 propertyKeys:(id)a1;
- (void)deletePersistedConfiguration;
- (id)initWithSources:(id)a0 version:(double)a1;
- (void)persistConfiguration;
- (id)propertyNamesForProperties:(struct objc_property **)a0 propertyCount:(unsigned int)a1;

@end
