@class NSString, NSDictionary, NSData, NSAdaptiveImageGlyph, NSURL, NSArray;

@interface IMSticker : NSObject

@property (readonly, nonatomic) BOOL isEmojiSticker;
@property (retain, nonatomic) NSData *recipe;
@property (copy, nonatomic) NSString *ballonBundleID;
@property (copy, nonatomic) NSString *stickerPackGUID;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *accessibilityName;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *sanitizedPrompt;
@property (copy, nonatomic) NSString *moodCategory;
@property (readonly, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *adaptiveImageGlyphContentIdentifier;
@property (copy, nonatomic) NSString *adaptiveImageGlyphContentDescription;
@property (copy, nonatomic) NSAdaptiveImageGlyph *cachedAdaptiveImageGlyphForSkippingPreviewGenerationOnly;
@property (copy, nonatomic) NSURL *animatedImageCacheURLFromExtension;
@property (nonatomic) long long stickerEffectType;
@property (copy, nonatomic) NSData *metadata;
@property (copy, nonatomic) NSString *stickerName;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSArray *representations;
@property (copy, nonatomic) NSString *externalURI;
@property (nonatomic) unsigned long long initialFrameIndex;
@property (readonly, copy, nonatomic) NSString *stickerGUID;
@property (readonly, copy, nonatomic) NSString *textToSpeechName;

+ (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })geometryDescriptorFromUserInfoDictionary:(id)a0;
+ (id)saveAdaptiveImageGlyphToTemporaryFile:(id)a0;
+ (id)userInfoDictionaryWithExternalURI:(id)a0;
+ (id)userInfoDictionaryWithGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })a0;
+ (id)userInfoDictionaryWithLayoutIntent:(unsigned long long)a0 parentPreviewWidth:(double)a1 xScalar:(double)a2 yScalar:(double)a3 scale:(double)a4 rotation:(double)a5 initialFrameIndex:(unsigned long long)a6 externalURI:(id)a7;
+ (id)userInfoDictionaryWithLayoutIntent:(unsigned long long)a0 parentPreviewWidth:(double)a1 xScalar:(double)a2 yScalar:(double)a3 scale:(double)a4 rotation:(double)a5 initialFrameIndex:(unsigned long long)a6 stickerPositionVersion:(unsigned long long)a7 externalURI:(id)a8;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)getSafeExternalURI;
- (id)initWithAdaptiveImageGlyphFromUnknownSource:(id)a0;
- (id)initWithStickerID:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 accessibilityLabel:(id)a3 accessibilityName:(id)a4 moodCategory:(id)a5 stickerName:(id)a6;
- (id)initWithStickerID:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 accessibilityLabel:(id)a3 accessibilityName:(id)a4 moodCategory:(id)a5 stickerName:(id)a6 textToSpeechName:(id)a7;
- (id)initWithStickerID:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 accessibilityLabel:(id)a3 accessibilityName:(id)a4 searchText:(id)a5 sanitizedPrompt:(id)a6 moodCategory:(id)a7 stickerName:(id)a8;
- (id)initWithStickerID:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 accessibilityLabel:(id)a3 accessibilityName:(id)a4 searchText:(id)a5 sanitizedPrompt:(id)a6 moodCategory:(id)a7 stickerName:(id)a8 effectType:(long long)a9;
- (id)initWithStickerID:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 accessibilityLabel:(id)a3 accessibilityName:(id)a4 searchText:(id)a5 sanitizedPrompt:(id)a6 moodCategory:(id)a7 stickerName:(id)a8 effectType:(long long)a9 textToSpeechName:(id)a10;
- (id)initWithStickerID:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 accessibilityLabel:(id)a3 accessibilityName:(id)a4 searchText:(id)a5 sanitizedPrompt:(id)a6 moodCategory:(id)a7 stickerName:(id)a8 textToSpeechName:(id)a9;
- (id)initWithStickerIdentifier:(id)a0 stickerPackID:(id)a1 representations:(id)a2 effectType:(long long)a3 initialFrameIndex:(unsigned long long)a4 externalURI:(id)a5 stickerName:(id)a6 accessibilityLabel:(id)a7 accessibilityName:(id)a8 searchText:(id)a9 sanitizedPrompt:(id)a10 metadata:(id)a11;
- (id)initWithStickerPropertyDictionary:(id)a0 stickerPackID:(id)a1 stickerPackBundlePath:(id)a2;

@end
