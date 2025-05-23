@class NSString, TRIDownloadOptions;

@interface TRITaskAttributionInternalInsecure : NSObject <TRITaskAttributing, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) int triCloudKitContainer;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) TRIDownloadOptions *networkOptions;

+ (id)taskAttributionFirstPartyWithNetworkOptions:(id)a0;
+ (id)taskAttributionFromPersistedTask:(id)a0;
+ (id)taskAttributionWithTeamIdentifier:(id)a0 triCloudKitContainer:(int)a1 applicationBundleIdentifier:(id)a2 networkOptions:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)asPersistedTaskAttribution;
- (id)copyWithReplacementApplicationBundleIdentifier:(id)a0;
- (id)copyWithReplacementNetworkOptions:(id)a0;
- (id)copyWithReplacementTeamIdentifier:(id)a0;
- (id)copyWithReplacementTriCloudKitContainer:(int)a0;
- (id)initWithTeamIdentifier:(id)a0 triCloudKitContainer:(int)a1 applicationBundleIdentifier:(id)a2 networkOptions:(id)a3;
- (BOOL)isEqualToTaskAttribution:(id)a0;

@end
