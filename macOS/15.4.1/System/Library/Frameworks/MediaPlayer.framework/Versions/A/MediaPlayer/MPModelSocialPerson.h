@class NSString;

@interface MPModelSocialPerson : MPModelPerson

@property (copy, nonatomic) NSString *uncensoredName;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *biography;
@property (nonatomic, getter=isPrivate) BOOL privatePerson;
@property (nonatomic, getter=isVerified) BOOL verified;
@property (nonatomic) long long pendingRequestsCount;
@property (nonatomic) BOOL hasLightweightProfile;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;

+ (id)kind;
+ (id)__biography_KEY;
+ (void)__MPModelPropertySocialPersonArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonBiography__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonHandle__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonHasLightweightProfile__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonIsPrivate__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonIsVerified__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonPendingRequestsCount__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonUncensoredName__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__handle_KEY;
+ (id)__hasLightweightProfile_KEY;
+ (id)__pendingRequestsCount_KEY;
+ (id)__privatePerson_KEY;
+ (id)__uncensoredName_KEY;
+ (id)__verified_KEY;
+ (long long)genericObjectType;

- (id)artworkCatalog;

@end
