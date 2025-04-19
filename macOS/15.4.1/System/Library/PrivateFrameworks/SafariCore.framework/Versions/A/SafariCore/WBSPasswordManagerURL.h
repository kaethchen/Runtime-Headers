@class NSURL;

@interface WBSPasswordManagerURL : NSObject

@property (class, readonly, nonatomic) NSURL *passwordManagerURL;
@property (class, readonly, nonatomic) NSURL *passwordManagerURLForRecentlyDeleted;
@property (class, readonly, nonatomic) NSURL *passwordManagerURLForGeneratedPasswords;
@property (class, readonly, nonatomic) NSURL *passwordManagerSecurityRecommendationsURL;

+ (id)passwordManagerURLWithDictionary:(id)a0;
+ (id)passwordManagerURLWithPrefsURL:(id)a0;
+ (id)valueForPasswordManagerURL:(id)a0 key:(id)a1;
+ (id)urlForDetailViewOfSavedAccount:(id)a0;
+ (id)_resourceSpecifierDictionaryForURL:(id)a0;
+ (BOOL)_resourceSpecifierDictionaryIsPasswordManagerResourceSpecifierDictionary:(id)a0;
+ (BOOL)_urlIsPasswordManagerURL:(id)a0 resourceSpecifierDictionary:(id)a1;
+ (BOOL)boolForPasswordManagerResourceDictionary:(id)a0 key:(id)a1 defaultValue:(BOOL)a2;
+ (id)dictionaryWithPasswordManagerURL:(id)a0;
+ (BOOL)isOtpauthMigrationResourceDictionary:(id)a0;
+ (BOOL)isOtpauthResourceDictionary:(id)a0;
+ (BOOL)isPasswordManagerFamilySharingGroupSetupURL:(id)a0;
+ (BOOL)isPasswordManagerGeneratedPasswordsResourceDictionary:(id)a0;
+ (BOOL)isPasswordManagerPasskeysResourceDictionary:(id)a0;
+ (BOOL)isPasswordManagerPasswordOptionsResourceDictionary:(id)a0;
+ (BOOL)isPasswordManagerRecentlyDeletedResourceDictionary:(id)a0;
+ (BOOL)isPasswordManagerSecurityRecommendationsResourceDictionary:(id)a0;
+ (BOOL)isPasswordManagerVerificationCodesResourceDictionary:(id)a0;
+ (BOOL)isPasswordManagerVerificationCodesURL:(id)a0;
+ (id)passwordManagerURLForGroupWithID:(id)a0;
+ (id)passwordManagerURLWithOtpauthURL:(id)a0;
+ (id)resourceSpecifierEncodedKey:(id)a0 value:(id)a1;
+ (BOOL)urlIsPasswordManagerURL:(id)a0;
+ (id)valueForPasswordManagerResourceDictionary:(id)a0 key:(id)a1;

@end
