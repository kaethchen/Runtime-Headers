@interface SFPasswordManagerURL : NSObject

+ (id)passwordManagerURLWithPrefsURL:(id)a0;
+ (id)passwordManagerURL;
+ (id)passwordManagerURLForFamilySharingGroupSetup;
+ (id)passwordManagerURLForSharingGroupWithGroupID:(id)a0;
+ (id)_transformURLIfNecessary:(id)a0;
+ (id)passwordManagerURLWithParameters:(id)a0;

@end
