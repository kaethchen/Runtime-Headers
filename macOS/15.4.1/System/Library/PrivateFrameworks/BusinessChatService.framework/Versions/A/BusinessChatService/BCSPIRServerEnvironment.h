@class NSString, BCSUserDefaults;

@interface BCSPIRServerEnvironment : NSObject <BCSPIRServerEnvironmentProtocol>

@property (nonatomic) long long type;
@property (nonatomic) long long serverType;
@property (nonatomic) BOOL isInternalInstall;
@property (retain, nonatomic) BCSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSString *pirUseCase;
@property (readonly, nonatomic) BOOL pirUsesCompression;
@property (readonly, nonatomic) NSString *secondaryIdentifier;

- (void).cxx_destruct;
- (BOOL)_boolFromDefaultsForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)_stringFromDefaultsForKey:(id)a0 defaultValue:(id)a1;
- (id)initWithUserDefaults:(id)a0 isInternalInstall:(BOOL)a1 type:(long long)a2 serverType:(long long)a3;

@end
