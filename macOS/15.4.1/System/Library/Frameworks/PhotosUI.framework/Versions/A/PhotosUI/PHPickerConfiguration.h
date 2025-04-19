@class PHPickerFilter, NSString, _PHPickerSuggestionGroup, _PHPickerAspectRatio, PHPhotoLibrary, NSArray, _PHPickerCollectionConfiguration;

@interface PHPickerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL _onboardingOverlayDismissedBefore;
@property (nonatomic) BOOL _onboardingHeaderDismissedBefore;
@property (nonatomic) BOOL _limitedLibraryHeaderDismissedBefore;
@property (readonly, nonatomic) BOOL _onlyReturnsIdentifiers;
@property (readonly, nonatomic) BOOL _usesOpenPanelLayout;
@property (nonatomic, setter=_setUsesMemoriesLayout:) BOOL _usesMemoriesLayout;
@property (copy, nonatomic, setter=_setPurposedLimitedLibraryApplicationIdentifier:) NSString *_purposedLimitedLibraryApplicationIdentifier;
@property (nonatomic, setter=_setEdgesWithoutContentMargins:) unsigned long long _edgesWithoutContentMargins;
@property (nonatomic, setter=_setDisabledFeatures:) unsigned long long _disabledFeatures;
@property (nonatomic, setter=_setAllowsContinuousSelection:) BOOL _allowsContinuousSelection;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (copy, nonatomic) _PHPickerSuggestionGroup *_suggestionGroup;
@property (copy, nonatomic) NSString *_searchText;
@property (nonatomic) long long minimumSelectionLimit;
@property (nonatomic, setter=_setDisabledPrivateCapabilities:) unsigned long long _disabledPrivateCapabilities;
@property (nonatomic, setter=_setSourceType:) long long _sourceType;
@property (copy, nonatomic) _PHPickerAspectRatio *_aspectRatio;
@property (copy, nonatomic) NSString *_containerIdentifier;
@property (nonatomic, setter=_setAlwaysShowLoadingPlaceholder:) BOOL _alwaysShowLoadingPlaceholder;
@property (nonatomic, setter=_setAllowsDownscaling:) BOOL _allowsDownscaling;
@property (nonatomic, setter=_setAllowsEncodingPolicyModification:) BOOL _allowsEncodingPolicyModification;
@property (copy, nonatomic) NSArray *preselectedItemIdentifiers;
@property (copy, nonatomic, setter=_setAlbumsConfiguration:) _PHPickerCollectionConfiguration *_albumsConfiguration;
@property (copy, nonatomic, setter=_setPeopleConfiguration:) _PHPickerCollectionConfiguration *_peopleConfiguration;
@property (nonatomic, setter=_setExcludedCollections:) unsigned long long _excludedCollections;
@property (nonatomic, setter=_setDesiredCollectionSuggestions:) unsigned long long _desiredCollectionSuggestions;
@property (nonatomic) long long preferredAssetRepresentationMode;
@property (nonatomic) long long selection;
@property (nonatomic) long long selectionLimit;
@property (copy, nonatomic) PHPickerFilter *filter;
@property (copy, nonatomic) NSArray *preselectedAssetIdentifiers;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long edgesWithoutContentMargins;
@property (nonatomic) unsigned long long disabledCapabilities;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (id)initWithPhotoLibraryAndOnlyForOpenPanel:(id)a0;
- (id)initWithPhotoLibraryAndOnlyReturnsIdentifiers:(id)a0;
- (id)_initWithPhotoLibrary:(id)a0 onlyReturnsIdentifiers:(BOOL)a1;

@end
