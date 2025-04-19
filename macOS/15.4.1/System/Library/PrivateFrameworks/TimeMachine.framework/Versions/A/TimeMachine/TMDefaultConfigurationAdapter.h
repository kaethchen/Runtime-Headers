@class NSString, TMConfiguration;

@interface TMDefaultConfigurationAdapter : NSObject <TMConfigurationAdapter>

@property (readonly) TMConfiguration *configuration;
@property (readonly) long long restrictedSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)valueForKey:(id)a0;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
