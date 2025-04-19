@class NSString, WFWhitelistSiteBuffer;

@interface WFWhitelistUserPreferences : NSObject

@property BOOL filterEnabled;
@property BOOL whitelistEnabled;
@property BOOL alwaysAllowHTTPS;
@property (retain) NSString *username;
@property (readonly) WFWhitelistSiteBuffer *filterWhitelist;
@property (readonly) WFWhitelistSiteBuffer *filterBlacklist;
@property (readonly) WFWhitelistSiteBuffer *webWhitelist;

+ (id)_arrayByConvertingLinesInStringsAtPath:(id)a0;
+ (BOOL)_isURLMetasite:(id)a0;
+ (id)_modificationDateForFileAtPath:(id)a0;
+ (id)_cachedWhitelistForPath:(id)a0 username:(id)a1 withAdditionalURLStrings:(id)a2;
+ (id)_metasiteDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)defaultWhitelistForUser:(id)a0;
+ (id)defaultWhitelistForUser:(id)a0 withAdditionalURLStrings:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPreferences:(id)a0;
- (id)initWithAdditionalURLStrings:(id)a0;
- (id)initWithPreferences:(id)a0 withAdditionalURLStrings:(id)a1;
- (BOOL)isURL:(id)a0 onList:(id)a1;
- (BOOL)isURLAllowed:(id)a0;
- (BOOL)isURLAllowed:(id)a0 reason:(id *)a1 shouldFilter:(BOOL *)a2 foundOnList:(BOOL *)a3;
- (id)pronounceOnPageURLString:(id)a0 shouldFilter:(BOOL *)a1;

@end
