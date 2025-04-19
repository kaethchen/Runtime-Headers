@class NSString;

@interface GKAuthenticationMachine : NSObject <NSCoding>

@property (retain, nonatomic) NSString *accountName;
@property (nonatomic) long long serverEnvironment;

+ (BOOL)supportsSecureCoding;
+ (id)authMachineForEnvironment:(long long)a0;
+ (void)migratePreBlacktailAccountInformation;
+ (void)migratePreSundanceAccountInformation;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
