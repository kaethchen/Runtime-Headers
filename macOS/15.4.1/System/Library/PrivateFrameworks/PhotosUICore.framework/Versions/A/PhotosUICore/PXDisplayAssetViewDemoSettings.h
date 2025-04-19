@class NSString, NSArray;

@interface PXDisplayAssetViewDemoSettings : PXSettings

@property (nonatomic) BOOL allowsTextSelection;
@property (copy, nonatomic) NSString *stringToHighlight;
@property (readonly, nonatomic) NSArray *stringsToHighlight;
@property (copy, nonatomic) NSString *sceneIdentifiersToHighlightString;
@property (readonly, nonatomic) NSArray *sceneIdentifiersToHighlight;
@property (copy, nonatomic) NSString *audioIdentifiersToHighlightString;
@property (readonly, nonatomic) NSArray *audioIdentifiersToHighlight;
@property (copy, nonatomic) NSString *humanActionIdentifiersToHighlightString;
@property (readonly, nonatomic) NSArray *humanActionIdentifiersToHighlight;
@property (copy, nonatomic) NSString *personLocalIdentifiersToHighlightString;
@property (readonly, nonatomic) NSArray *personLocalIdentifiersToHighlight;
@property (nonatomic) BOOL showDummyTimeRangeHighlight;
@property (nonatomic) long long preferredDynamicRange;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)transientProperties;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
