@class geo_reentrant_isolater, GEOMapItemDetourInfo, GEOMapItemPhotosAttribution, NSMapTable, GEORestaurantFeaturesLink, NSNumber, GEOMapItemClientAttributes, GEOTrailHead, GEOMuninViewState, GEOBusinessAssets, geo_isolater, GEOMessageLink, GEOBusinessHours, GEOMapItemContainedPlace, GEOPlacecardLayoutData, GEOPDPlace, GEOPDHikeAssociatedInfo, GEOPDMultiLocalizedString, GEOStyleAttributes, GEOMapItemIdentifier, NSSet, GEOEnrichmentInfo, GEOMiniBrowseCategories, GEOViewportFrame, GEOExploreGuides, GEOLabelGeometry, GEOAppleRating, GEOPDFlyover, GEOEnrichmentData, NSData, GEOPlaceResult, GEOEnhancedPlacement, NSDate, GEOAssociatedApp, NSArray, GEOPOIClaim, NSTimeZone, GEOFeatureStyleAttributes, GEOMapItemPlaceAttribution, GEOPDURLData, GEOPriceDescription, GEOInlineRapEnablement, GEOAddressObject, GEOTooltip, GEOAddress, NSString, GEOStorefrontInfo, GEOEVCharger, GEOPDHikeGeometry, NSURL, GEOLocalizedString, NSDictionary, _GEOEncyclopedicInfo, GEOHikeSummary, GEOPlaceQuestionnaire, GEOEnclosingPlace, GEOMapRegion, GEOMapItemReviewsAttribution, GEOStorefrontPresentationInfo, GEOPlace;
@protocol GEOMapItemTransitInfo, GEOMapItemVenueInfo, GEOTransitAttribution, GEOEncyclopedicInfo, GEOTransitVehiclePosition, GEOAnnotatedItemList;

@interface _GEOPlaceDataItem : NSObject <GEOMapItem> {
    GEOMapItemIdentifier *_identifier;
    NSSet *_alternateIdentifiers;
    GEOPDPlace *_placeData;
    NSMapTable *_attributionMap;
    GEOPDMultiLocalizedString *_disambiguationLabel;
    GEOMapItemDetourInfo *_detourInfo;
    BOOL _isTransitDisplayFeature;
    NSData *_externalTransitStationCode;
    geo_isolater *_lazyIvarIsolater;
    GEOPlace *_place;
    _GEOEncyclopedicInfo *_encyclopedicInfo;
    GEOStorefrontInfo *_storefrontInfo;
    GEOStorefrontPresentationInfo *_storefrontPresentationInfo;
    id<GEOMapItemVenueInfo> _venueInfo;
    NSArray *_additionalPlaces;
    GEOAddressObject *_addressObject;
    NSString *_name;
    int _placeType;
    GEOBusinessHours *_businessHours;
    NSArray *_childItems;
    NSArray *_captionedPhotoAlbums;
    GEOPlacecardLayoutData *_placecardLayoutData;
    NSDictionary *_relatedPlacesByComponentId;
    NSArray *_allPhotoAttributions;
    geo_reentrant_isolater *_lazyReentrantIvarIsolater;
    NSTimeZone *_timeZone;
    NSArray *_prioritizedBusinessHours;
    BOOL _checkedPrioritizedBusinessHours;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *secondaryName;
@property (readonly, nonatomic) NSString *secondarySpokenName;
@property (readonly, nonatomic) NSData *encodedData;
@property (readonly, nonatomic, getter=isDisputed) BOOL disputed;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) struct { double x0; double x1; } centerCoordinate;
@property (readonly, nonatomic) struct { double x0; double x1; } labelCoordinate;
@property (readonly, nonatomic) int referenceFrame;
@property (readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property (readonly, nonatomic) BOOL hasDisplayMinZoom;
@property (readonly, nonatomic) float displayMinZoom;
@property (readonly, nonatomic) BOOL hasDisplayMaxZoom;
@property (readonly, nonatomic) float displayMaxZoom;
@property (readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property (readonly, nonatomic) GEOAddress *geoAddress;
@property (readonly, nonatomic) NSDictionary *addressDictionary;
@property (readonly, nonatomic) NSArray *areasOfInterest;
@property (readonly, nonatomic) NSTimeZone *timezone;
@property (readonly, nonatomic) int mapDisplayType;
@property (readonly, nonatomic) GEOLocalizedString *disclaimerText;
@property (readonly, nonatomic) GEOPDURLData *urlData;
@property (readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property (readonly, nonatomic) GEOMapRegion *geoFenceMapRegionOrNil;
@property (readonly, nonatomic) int contactAddressType;
@property (readonly, nonatomic) NSString *contactName;
@property (readonly, nonatomic) NSString *contactSpokenName;
@property (readonly, nonatomic) BOOL contactIsMe;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) BOOL isEventAllDay;
@property (readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property (readonly, nonatomic, getter=_tips) NSArray *tips;
@property (readonly, nonatomic, getter=_photos) NSArray *photos;
@property (readonly, nonatomic, getter=_associatedApp) GEOAssociatedApp *associatedApp;
@property (readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property (readonly, nonatomic, getter=_place) GEOPlace *place;
@property (readonly, nonatomic, getter=_placeResult) GEOPlaceResult *placeResult;
@property (readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property (readonly, nonatomic, getter=_placeType) int placeType;
@property (readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property (readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property (readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property (readonly, nonatomic, getter=_responseStatusIsIncomplete) BOOL responseStatusIncomplete;
@property (readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
@property (readonly, nonatomic, getter=_hasResultProviderID) BOOL hasResultProviderID;
@property (readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property (readonly, nonatomic, getter=_isTransitDisplayFeature) BOOL isTransitDisplayFeature;
@property (readonly, nonatomic, getter=_hasTransit) BOOL hasTransit;
@property (readonly, nonatomic, getter=_transitInfo) id<GEOMapItemTransitInfo> transitInfo;
@property (readonly, nonatomic, getter=_transitAttribution) id<GEOTransitAttribution> transitAttribution;
@property (readonly, nonatomic, getter=_transitVehiclePosition) id<GEOTransitVehiclePosition> transitVehiclePosition;
@property (readonly, nonatomic, getter=_hasFlyover) BOOL hasFlyover;
@property (readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property (readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property (readonly, nonatomic, getter=_muninViewState) GEOMuninViewState *muninViewState;
@property (readonly, nonatomic, getter=_storefrontInfo) GEOStorefrontInfo *storefrontInfo;
@property (readonly, nonatomic, getter=_storefrontPresentationInfo) GEOStorefrontPresentationInfo *storefrontPresentationInfo;
@property (readonly, nonatomic, getter=_hasMUID) BOOL hasMUID;
@property (readonly, nonatomic, getter=_muid) unsigned long long muid;
@property (readonly, nonatomic, getter=_identifier) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic, getter=_alternateIdentifiers) NSSet *alternateIdentifiers;
@property (readonly, nonatomic) GEOMapItemIdentifier *transitStationIdentifier;
@property (readonly, nonatomic, getter=_placeDisplayType) int placeDisplayType;
@property (readonly, nonatomic, getter=_hasAreaInMeters) BOOL hasAreaInMeters;
@property (readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property (readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property (readonly, nonatomic, getter=_priceDescription) GEOPriceDescription *priceDescription;
@property (readonly, nonatomic, getter=_hasUserRatingScore) BOOL hasUserRatingScore;
@property (readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property (readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property (readonly, nonatomic, getter=_hasPriceRange) BOOL hasPriceRange;
@property (readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property (readonly, nonatomic, getter=_maxScoreForPriceRange) unsigned int maxScoreForPriceRange;
@property (readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property (readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property (readonly, nonatomic, getter=_childItems) NSArray *childItems;
@property (readonly, nonatomic, getter=_hasAnyAccolades) BOOL hasAnyAccolades;
@property (readonly, nonatomic, getter=_accolades) NSArray *accolades;
@property (readonly, nonatomic, getter=_hasAnyAmenities) BOOL hasAnyAmenities;
@property (readonly, nonatomic, getter=_amenities) NSArray *amenities;
@property (readonly, nonatomic, getter=_hasEncyclopedicInfo) BOOL hasEncyclopedicInfo;
@property (readonly, nonatomic, getter=_encyclopedicInfo) id<GEOEncyclopedicInfo> encyclopedicInfo;
@property (readonly, nonatomic, getter=_hasPlaceDescription) BOOL hasPlaceDescription;
@property (readonly, nonatomic, getter=_placeDescription) NSString *placeDescription;
@property (readonly, nonatomic, getter=_hasTelephone) BOOL hasTelephone;
@property (readonly, nonatomic, getter=_telephone) NSString *telephone;
@property (readonly, nonatomic, getter=_optsOutOfTelephoneAds) BOOL optsOutOfTelephoneAds;
@property (readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property (readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property (readonly, nonatomic, getter=_inlineRapEnablement) GEOInlineRapEnablement *inlineRapEnablement;
@property (readonly, nonatomic, getter=_isPartiallyClientized) BOOL isPartiallyClientized;
@property (readonly, nonatomic, getter=_searchResultPhotoCarousel) NSArray *photoCarousel;
@property (readonly, nonatomic, getter=_needsAttribution) BOOL needsAttribution;
@property (readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property (readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property (readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property (readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property (readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property (readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property (readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property (readonly, nonatomic, getter=_allPhotoAttributions) NSArray *allPhotoAttributions;
@property (readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property (readonly, nonatomic, getter=_poiCategory) NSString *poiCategory;
@property (readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property (readonly, nonatomic, getter=_mapsCategoryId) NSString *mapsCategoryId;
@property (readonly, nonatomic, getter=_alternateMapsCategoryIDs) NSArray *alternateMapsCategoryIDs;
@property (readonly, nonatomic, getter=_mapsCategoryMUID) NSNumber *mapsCategoryMUID;
@property (readonly, nonatomic, getter=_alternateMapsCategoryMUIDs) NSArray *alternateMapsCategoryMUIDs;
@property (readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property (readonly, nonatomic, getter=_hasPOIClaim) BOOL hasPOIClaim;
@property (readonly, nonatomic, getter=_poiClaim) GEOPOIClaim *poiClaim;
@property (readonly, nonatomic) GEOBusinessAssets *businessAssets;
@property (readonly, nonatomic) NSArray *spatialMappedCategories;
@property (readonly, nonatomic) NSArray *spatialMappedPlaceCategories;
@property (readonly, nonatomic) BOOL hasVenueCapacity;
@property (readonly, nonatomic) long long venueCapacity;
@property (readonly, nonatomic, getter=_hasFeatureLink) BOOL hasFeatureLink;
@property (readonly, nonatomic, getter=_featureLink) GEORestaurantFeaturesLink *featureLink;
@property (readonly, nonatomic, getter=_parsecSectionType) int parsecSectionType;
@property (readonly, nonatomic, getter=_isStandaloneBrand) BOOL isStandAloneBrand;
@property (readonly, nonatomic, getter=_messageLink) GEOMessageLink *messageLink;
@property (readonly, nonatomic, getter=_externalActionLinks) NSArray *externalActionLinks;
@property (readonly, nonatomic, getter=_quickLinks) NSArray *quickLinks;
@property (readonly, nonatomic, getter=_secondaryQuickLinks) NSArray *secondaryQuickLinks;
@property (readonly, nonatomic, getter=_placeCollections) NSArray *placeCollections;
@property (readonly, nonatomic, getter=_exploreGuides) GEOExploreGuides *exploreGuides;
@property (readonly, nonatomic, getter=_placeCollectionsIds) NSArray *placeCollectionsIds;
@property (readonly, nonatomic, getter=_hasPlaceCollectionPullQuotes) BOOL hasPlaceCollectionPullQuotes;
@property (readonly, nonatomic, getter=_placeCollectionPullQuotes) NSArray *placeCollectionPullQuotes;
@property (readonly, nonatomic, getter=_hasBrandMUID) BOOL hasBrandMUID;
@property (readonly, nonatomic, getter=_brandMUID) unsigned long long brandMUID;
@property (readonly, nonatomic, getter=_relatedPlaceLists) NSArray *relatedPlaceLists;
@property (readonly, nonatomic, getter=_hasEVCharger) BOOL hasEVCharger;
@property (readonly, nonatomic, getter=_evCharger) GEOEVCharger *evCharger;
@property (readonly, nonatomic, getter=_placecardLayoutData) GEOPlacecardLayoutData *placecardLayoutData;
@property (readonly, nonatomic) GEOMapItemDetourInfo *detourInfo;
@property (readonly, nonatomic) BOOL hasExpiredComponents;
@property (readonly, nonatomic, getter=_hasVenueFeatureType) BOOL hasVenueFeatureType;
@property (readonly, nonatomic, getter=_venueFeatureType) int venueFeatureType;
@property (readonly, nonatomic, getter=_venueInfo) id<GEOMapItemVenueInfo> venueInfo;
@property (readonly, nonatomic, getter=_browseCategories) NSArray *browseCategories;
@property (readonly, nonatomic, getter=_miniBrowseCategories) GEOMiniBrowseCategories *miniBrowseCategories;
@property (readonly, nonatomic, getter=_placeDisplayStyle) int placeDisplayStyle;
@property (readonly, nonatomic, getter=_annotatedItemList) id<GEOAnnotatedItemList> annotatedItemList;
@property (readonly, nonatomic, getter=_hasEnclosingPlace) BOOL hasEnclosingPlace;
@property (readonly, nonatomic, getter=_enclosingPlace) GEOEnclosingPlace *enclosingPlace;
@property (readonly, nonatomic, getter=_hasOperatingHours) BOOL hasOperatingHours;
@property (readonly, nonatomic, getter=_hasCurrentOperatingHours) BOOL hasCurrentOperatingHours;
@property (readonly, nonatomic, getter=_hasBusinessHours) BOOL hasBusinessHours;
@property (readonly, nonatomic, getter=_businessHours) NSArray *businessHours;
@property (readonly, nonatomic, getter=_hasLinkedServices) BOOL hasLinkedServices;
@property (readonly, nonatomic, getter=_linkedServices) NSArray *linkedServices;
@property (readonly, nonatomic, getter=_enhancedPlacement) GEOEnhancedPlacement *enhancedPlacement;
@property (readonly, nonatomic, getter=_labelGeometry) GEOLabelGeometry *labelGeometry;
@property (readonly, nonatomic, getter=_viewportFrame) GEOViewportFrame *viewportFrame;
@property (readonly, nonatomic, getter=_enrichmentInfo) GEOEnrichmentInfo *enrichmentInfo;
@property (readonly, nonatomic, getter=_enrichmentData) GEOEnrichmentData *enrichmentData;
@property (readonly, nonatomic, getter=_trailHead) GEOTrailHead *trailHead;
@property (readonly, nonatomic, getter=_tooltip) GEOTooltip *tooltip;
@property (readonly, nonatomic, getter=_hikeSummary) GEOHikeSummary *hikeSummary;
@property (readonly, nonatomic, getter=_hikeAssociatedInfo) GEOPDHikeAssociatedInfo *hikeAssociatedInfo;
@property (readonly, nonatomic, getter=_hikeGeometry) GEOPDHikeGeometry *hikeGeometry;
@property (readonly, nonatomic, getter=_hikeGeometryElevationModel) int hikeGeometryElevationModel;
@property (readonly, nonatomic, getter=_placeCategoryType) int placeCategoryType;
@property (readonly, nonatomic) NSData *externalTransitStationCode;
@property (readonly, nonatomic) NSArray *supportedTransitPaymentMethods;
@property (readonly, nonatomic) NSArray *transitPaymentMethodSuggestions;
@property (readonly, nonatomic) double cachingRadiusMeters;
@property (readonly, nonatomic, getter=_hasWifiFingerprintLabelType) BOOL hasWifiFingerprintLabelType;
@property (readonly, nonatomic, getter=_wifiFingerprintLabelType) int wifiFingerprintLabelType;
@property (readonly, nonatomic, getter=_hasWifiFingerprintConfidence) BOOL hasWifiFingerprintConfidence;
@property (readonly, nonatomic, getter=_wifiFingerprintConfidence) unsigned int wifiFingerprintConfidence;
@property (readonly, nonatomic, getter=_hasWifiFingerprintLabelStatusCode) BOOL hasWifiFingerprintLabelStatusCode;
@property (readonly, nonatomic, getter=_wifiFingerprintLabelStatusCode) int wifiFingerprintLabelStatusCode;
@property (readonly, nonatomic, getter=_containedPlace) GEOMapItemContainedPlace *containedPlace;
@property (readonly, nonatomic, getter=_isInLinkedPlaceRelationship) BOOL inLinkedPlaceRelationship;
@property (readonly, nonatomic, getter=_hasGroundViewLocationId) BOOL hasGroundViewLocationId;
@property (readonly, nonatomic, getter=_groundViewLocationId) unsigned long long groundViewLocationId;
@property (readonly, nonatomic, getter=_walletPlaceStyling) GEOStyleAttributes *walletPlaceStyling;
@property (readonly, nonatomic, getter=_walletPlaceLocalizedString) NSString *walletPlaceLocalizedString;
@property (readonly, nonatomic, getter=_walletPlaceLocalizedStringLocale) NSString *walletPlaceLocalizedStringLocale;
@property (readonly, nonatomic, getter=_walletCategoryStyling) GEOStyleAttributes *walletCategoryStyling;
@property (readonly, nonatomic, getter=_walletCategoryLocalizedString) NSString *walletCategoryLocalizedString;
@property (readonly, nonatomic, getter=_walletCategoryLocalizedStringLocale) NSString *walletCategoryLocalizedStringLocale;
@property (readonly, nonatomic, getter=_walletMapsCategoryIdentifier) NSString *walletMapsCategoryIdentifier;
@property (readonly, nonatomic, getter=_walletCategoryIdentifier) NSString *walletCategoryIdentifier;
@property (readonly, nonatomic, getter=_enableRAPLightweightFeedback) BOOL enableRAPLightweightFeedback;
@property (readonly, nonatomic, getter=_showSuggestAnEditButton) BOOL showSuggestAnEditButton;
@property (readonly, nonatomic, getter=_RAPFlowType) int RAPFlowType;
@property (readonly, nonatomic, getter=_hasAppleRatings) BOOL hasAppleRatings;
@property (readonly, nonatomic, getter=_appleRatings) NSArray *appleRatings;
@property (readonly, nonatomic, getter=_overallAppleRating) GEOAppleRating *overallRating;
@property (readonly, nonatomic, getter=_hasPlaceQuestionnaire) BOOL hasPlaceQuestionnaire;
@property (readonly, nonatomic, getter=_placeQuestionnaire) GEOPlaceQuestionnaire *placeQuestionnaire;
@property (readonly, nonatomic, getter=_identifierHistory) NSArray *identifierHistory;
@property (readonly, nonatomic, getter=_canDownloadMorePhotos) BOOL canDownloadMorePhotos;
@property (readonly, nonatomic, getter=_totalPhotoCount) unsigned long long totalPhotoCount;
@property (readonly, nonatomic, getter=_hasCaptionedPhotoAlbum) BOOL hasCaptionedPhotoAlbum;
@property (readonly, nonatomic, getter=_captionedPhotoAlbums) NSArray *captionedPhotoAlbums;
@property (readonly, nonatomic, getter=_alternateSearchableNames) NSArray *alternateSearchableNames;
@property (readonly, nonatomic, getter=_iso3166CountryCode) NSString *iso3166CountryCode;
@property (readonly, nonatomic, getter=_iso3166SubdivisionCode) NSString *iso3166SubdivisionCode;
@property (readonly, nonatomic, getter=_bestAvailableCountryCode) NSString *bestAvailableCountryCode;
@property (readonly, nonatomic, getter=_hasAreaHighlightId) BOOL hasAreaHighlightId;
@property (readonly, nonatomic, getter=_areaHighlightId) unsigned long long areaHighlightId;
@property (readonly, nonatomic, getter=_photosMemoryScore) float photosMemoryScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_localizedCategoryNamesForType:(unsigned int)a0;
- (id)_mapItemByStrippingOptionalData;
- (id)_arrivalMapRegionForTransportType:(int)a0;
- (id)_asPlaceInfo;
- (id)_bestAvatarBrandIconURLForSize:(struct CGSize { double x0; double x1; })a0 allowSmaller:(BOOL)a1;
- (id)_bestHeroBrandIconURLForSize:(struct CGSize { double x0; double x1; })a0 allowSmaller:(BOOL)a1;
- (id)_bestNavbarBrandIconURLForSize:(struct CGSize { double x0; double x1; })a0 allowSmaller:(BOOL)a1;
- (id)_firstRelatedPlaceListForType:(int)a0;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)a0;
- (id)_mapItemBySettingIsTransitDisplayFeature:(BOOL)a0;
- (id)_relatedPlaceListForComponentIdentifier:(int)a0;
- (id)_spokenAddressForLocale:(id)a0;
- (id)addressObject;
- (BOOL)isEqualToMapItem:(id)a0;
- (void)iterateGroundViewsWithBlock:(id /* block */)a0;
- (id)shortAddress;
- (id)spokenNameForLocale:(id)a0;
- (id)weatherDisplayName;
- (void)_refreshPhotoAttributions;
- (id)_relatedPlacesByComponentId;
- (id)initWithPlaceData:(id)a0;
- (id)initWithPlaceData:(id)a0 attributionMap:(id)a1 disambiguationLabel:(id)a2 detourInfo:(id)a3 externalTransitStationCode:(id)a4 additionalPlaces:(id)a5;
- (id)initWithPlaceData:(id)a0 detourInfo:(id)a1;
- (id)initWithPlaceData:(id)a0 detourInfo:(id)a1 additionalPlaceDatas:(id)a2;

@end
