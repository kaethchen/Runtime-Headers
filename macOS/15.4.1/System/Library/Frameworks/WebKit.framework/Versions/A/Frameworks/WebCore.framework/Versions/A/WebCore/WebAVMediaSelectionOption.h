@class NSString;

@interface WebAVMediaSelectionOption : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _localizedDisplayName;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)languageCode;
- (id)locale;
- (id).cxx_construct;
- (id)propertyList;
- (id)outOfBandSource;
- (BOOL)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)displayNameWithLocale:(id)a0;
- (id)extendedLanguageTag;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (BOOL)isPlayable;
- (id)mediaCharacteristics;
- (id)mediaSubTypes;
- (id)metadataForFormat:(id)a0;
- (id)outOfBandIdentifier;
- (id)track;
- (id)initWithMediaType:(id)a0 displayName:(id)a1;

@end
