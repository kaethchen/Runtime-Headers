@class NSString, NSDictionary, NSURL, NSUserActivity;

@interface INCAppLaunchRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) BOOL retainsSiri;
@property (readonly, nonatomic, getter=isSupportedInCarPlay) BOOL supportedInCarPlay;

+ (void)initialize;
+ (id)removeDenyListedApplicationProxies:(id)a0;
+ (id)specialElementIdentifierForBundleIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)URLOverrideForURL:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)_retainsSiri;
- (id)initWithAudioCallIntentForCarousel:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0 options:(id)a1 URL:(id)a2 userActivity:(id)a3;
- (id)initWithBundleIdentifier:(id)a0 options:(id)a1 URL:(id)a2 userActivity:(id)a3 retainsSiri:(BOOL)a4;
- (id)initWithIntent:(id)a0 userActivity:(id)a1 inBackground:(BOOL)a2 error:(id *)a3;
- (id)initWithIntent:(id)a0 userActivity:(id)a1 inBackground:(BOOL)a2 retainsSiri:(BOOL)a3 error:(id *)a4;
- (id)initWithInteraction:(id)a0 userActivity:(id)a1 inBackground:(BOOL)a2 error:(id *)a3;
- (id)initWithInteraction:(id)a0 userActivity:(id)a1 inBackground:(BOOL)a2 retainsSiri:(BOOL)a3 error:(id *)a4;
- (void)observeForAppLaunchWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)performWithCompletionHandler:(id /* block */)a0;

@end
