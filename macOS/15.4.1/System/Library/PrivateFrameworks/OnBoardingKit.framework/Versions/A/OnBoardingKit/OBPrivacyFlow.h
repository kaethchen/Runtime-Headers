@class NSString, NSImage, NSArray, NSDictionary, OBBundle, NSAttributedString;

@interface OBPrivacyFlow : OBFlow {
    NSString *_splashContentName;
    NSDictionary *_splashPlist;
    BOOL _buttonIconLoaded;
    NSImage *_buttonIcon;
    BOOL _splashPListContainsLegacyStringKeys;
}

@property (retain, nonatomic) OBBundle *bundle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long contentVersion;
@property (readonly, nonatomic) BOOL platformSupported;
@property (readonly, nonatomic) BOOL showInCombinedList;
@property (readonly, nonatomic) BOOL enablesGroupingInCombinedList;
@property (readonly, nonatomic, getter=isPersonallyIdentifiable) BOOL personallyIdentifiable;
@property (readonly, nonatomic) NSImage *buttonIcon;
@property (readonly, nonatomic) NSString *localizedButtonTitle;
@property (readonly, nonatomic) NSString *localizedButtonCaption;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedShortTitle;
@property (readonly, nonatomic) NSString *localizedCombinedHeader;
@property (readonly, nonatomic) NSAttributedString *localizedCombinedFooter;
@property (readonly, nonatomic) NSArray *localizedContentList;

+ (id)flowWithBundle:(id)a0;
+ (id)_modelSpecificLocalizedStringKeyForKey:(id)a0 preferredDeviceType:(unsigned long long)a1;
+ (id)_splashPlistFromBundle:(id)a0 forContentName:(id)a1;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (id)_deviceClass;
- (id)_SKU;
- (id)_bestStringConsideringCMEChinaForKeyWithPrefix:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2 withGenerativeSuffix:(BOOL)a3;
- (id)_bestStringConsideringGenerativeForKeyWithPrefix:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (id)_bestStringConsideringNetworkForKeyWithPrefix:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2 withGenerativeSuffix:(BOOL)a3 withGMEChinaSuffix:(BOOL)a4;
- (id)_bestStringForKeyWithPrefix:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (id)_bundleImageNamed:(id)a0;
- (BOOL)_conformsToRequirement:(id)a0;
- (BOOL)_conformsToRequirements:(id)a0;
- (id)_currentPlatform;
- (id)_iconType;
- (id)_legacyLocalizedContentListForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)_splashLocalizedStringForKey:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (id)_splashLocalizedStringForKey:(id)a0 language:(id)a1 table:(id)a2 preferredDeviceType:(unsigned long long)a3;
- (id)_splashPlist;
- (id)_stringForKeyWithPrefix:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2 withGenerativeSuffix:(BOOL)a3 withGMEChinaSuffix:(BOOL)a4 withNetworkSuffix:(BOOL)a5;
- (id)_stringForPlaceholderBundleWithString:(id)a0;
- (id)_stringKeyWithCapabilitiesFromPrefix:(id)a0 withNetwork:(BOOL)a1 withGenerative:(BOOL)a2 withGMEChinaSuffix:(BOOL)a3;
- (id)_textForConditionalItem:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (id)_verifiedSplashLocalizedStringForKey:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (id)initWithSplashContent:(id)a0;
- (id)localizedButtonCaptionForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedButtonTitleForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedCombinedFooterComponentsForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedCombinedFooterForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedCombinedHeaderForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedContentListForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedShortTitleForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedTitleForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)replaceeIdentifierSets;
- (id)replacementPrecondition;
- (void)setButtonIcon:(id)a0;

@end
