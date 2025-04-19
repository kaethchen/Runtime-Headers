@class NSString, NSUserDefaults;

@interface PGUserDefaultsConfigurationSource : NSObject <PGConfigurationSource>

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithUserDefaults:(id)a0;

@end
