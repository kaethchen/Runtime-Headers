@class NSProcessInfo, NSString, NSDictionary, PPCRedirect;

@interface DDMContext : NSObject

@property (retain) NSProcessInfo *processInfo;
@property struct { long long majorVersion; long long minorVersion; long long patchVersion; } osVersionSystem;
@property (retain) NSDictionary *systemVersionDictionary;
@property (readonly) BOOL isInternalBuild;
@property (retain, nonatomic) PPCRedirect *urlRedirector;
@property (readonly) NSString *languages;
@property (readonly) NSString *hardware;
@property (readonly) NSString *platform;
@property (readonly) NSString *osProductName;
@property (readonly) NSString *osVersion;
@property (readonly) NSString *osVersionString;
@property (readonly) NSString *osVersionBuild;
@property (readonly) long long osVersionMajor;
@property (readonly) long long osVersionMinor;
@property (readonly) long long osVersionPatch;
@property (readonly) NSString *mappingDescription;

+ (id)sharedContext;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)hostMappings;
- (id)mappedHost:(id)a0;
- (id)mappedRequest:(id)a0;
- (id)mappedURL:(id)a0;
- (id)preferredLocalizationsFromLanguages:(id)a0;

@end
