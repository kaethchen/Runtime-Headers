@class NSDictionary, NSUserDefaults;

@interface MFLegacyAccountStorage : NSObject

@property (copy, nonatomic) NSDictionary *accountsPlistContents;
@property (readonly, nonatomic) NSUserDefaults *mailUserDefaults;

+ (id)log;
+ (id)legacyUIDForAccount:(id)a0;
+ (id)smtpIdentifierWithHostname:(id)a0 username:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)legacyAccountInfoForAccount:(id)a0;
- (id)legacyTildeAbbreviatedAccountDirectoryPathForAccount:(id)a0;

@end
