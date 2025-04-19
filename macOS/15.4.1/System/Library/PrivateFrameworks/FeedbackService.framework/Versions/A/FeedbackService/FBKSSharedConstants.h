@class NSString, NSUserDefaults;

@interface FBKSSharedConstants : NSObject

@property (class, readonly, nonatomic) NSString *overrideGeoCountryCode;
@property (class, readonly, nonatomic) NSUserDefaults *sharedUserDefaults;

+ (void)initialize;
+ (short)environment;
+ (long long)platform;
+ (id)productVersion;
+ (void)overrideEnvironment:(short)a0 host:(id)a1;
+ (id)appleSeedURL;
+ (id)swVers;
+ (id)swTrain;
+ (void)_deriveSystemVersion;
+ (id)appleSeedURLFromDefaults:(id)a0 withEnvironment:(short)a1;

@end
