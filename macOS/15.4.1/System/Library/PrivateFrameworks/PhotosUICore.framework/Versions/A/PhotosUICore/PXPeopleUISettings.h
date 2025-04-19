@class NSString;

@interface PXPeopleUISettings : PXSettings

@property (nonatomic) BOOL alwaysShowBanner;
@property (nonatomic) long long debugBannerStyle;
@property (nonatomic) long long debugBannerAttribution;
@property (nonatomic) BOOL ignoreNegativeSuggestionFeedback;
@property (nonatomic) long long negativeFeedbackWaitPeriodMinutes;
@property (nonatomic) BOOL ignoreAttributionFiltering;
@property (copy, nonatomic) NSString *debugContactIdentifier;
@property (nonatomic) BOOL mockProcessingUpdates;
@property (nonatomic) BOOL mockEmptyContentUpdates;
@property (nonatomic) BOOL alwaysShowMe;
@property (nonatomic) BOOL useGridZeroForDetails;
@property (nonatomic) BOOL debugFadeLayer;
@property (nonatomic) BOOL showUUIDIfNoName;
@property (nonatomic) BOOL enableReviewPhotosDemoMode;
@property (nonatomic) BOOL useReviewPhotosMockDataSource;
@property (nonatomic) BOOL showReviewPhotosObjectType;
@property (nonatomic) BOOL forceReviewMorePhotosInterimLoading;
@property (nonatomic) BOOL displayReviewMorePhotosSuggestionType;
@property (nonatomic) BOOL displayReviewMorePhotosDate;
@property (nonatomic) BOOL alwaysShowBootstrap;
@property (nonatomic) BOOL enableBootstrapDemoMode;
@property (nonatomic) BOOL useBootstrapMockDataSource;
@property (nonatomic) BOOL displayBootstrapSuggestionType;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
