@class NSString, NSDictionary, NSURL, NSSet;

@interface TVISAerialAsset : NSObject <BSDescriptionProviding, TVISScreenSaverAsset>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) NSString *shotID;
@property (readonly, nonatomic) NSDictionary *pointsOfInterest;
@property (readonly, nonatomic) NSURL *previewImageURL;
@property (readonly, nonatomic) NSSet *categoryIDs;
@property (readonly, nonatomic) NSSet *subcategoryIDs;
@property (readonly, nonatomic) NSSet *pinnedForUserIDs;
@property (readonly, nonatomic) long long playOrder;
@property (readonly, nonatomic) BOOL includeInShuffle;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) long long preferredOrder;
@property (readonly, nonatomic) BOOL showInTopLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) NSURL *localAssetURL;

+ (id)localPreviewImageURLForAssetID:(id)a0;
+ (id)builtInPreviewImageURLForAssetID:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithEntity:(id)a0 downloadedFileURLs:(id)a1 previewImageURLs:(id)a2 localizationBundle:(id)a3 preferredLocalizations:(id)a4;

@end
