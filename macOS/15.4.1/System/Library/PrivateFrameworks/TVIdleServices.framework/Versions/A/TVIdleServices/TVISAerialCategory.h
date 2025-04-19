@class NSArray, NSSet, NSString, NSURL;

@interface TVISAerialCategory : TVISSettingsOption <BSDescriptionProviding, NSSecureCoding> {
    BOOL _active;
    NSString *_identifier;
    NSString *_localizedName;
    NSString *_localizedDescription;
    NSURL *_previewImageURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long preferredOrder;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSArray *subcategories;
@property (readonly, nonatomic) NSSet *activeForUserIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localPreviewImageURLForCategoryID:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)localizedDescription;
- (BOOL)isActive;
- (id)localizedName;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)previewImageURL;
- (id)initWithEntity:(id)a0 downloadedFileURLs:(id)a1 previewImageURLs:(id)a2 localizationBundle:(id)a3 preferredLocalizations:(id)a4;

@end
