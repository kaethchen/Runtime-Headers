@class TPSAssets, NSString, NSArray, TPSWidgetContent, TPSAssetFileInfoManager, TPSLinkedDocument, TPSNotification;

@interface TPSDocument : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *userLanguageCode;
@property (copy, nonatomic) NSArray *keywords;
@property (nonatomic) long long lastModifiedDate;
@property (copy, nonatomic) NSString *clientConditionID;
@property (copy, nonatomic) TPSWidgetContent *widgetContent;
@property (copy, nonatomic) TPSAssetFileInfoManager *assetFileInfoManager;
@property (copy, nonatomic) TPSLinkedDocument *linkedDocument;
@property (readonly, nonatomic, getter=isWelcome) BOOL welcome;
@property (readonly, nonatomic, getter=isHardwareWelcome) BOOL hardwareWelcome;
@property (readonly, nonatomic, getter=isSoftwareWelcome) BOOL softwareWelcome;
@property (readonly, nonatomic, getter=isSwitcherWelcome) BOOL switcherWelcome;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSString *clonedFromID;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *footnote;
@property (copy, nonatomic) NSArray *textContent;
@property (copy, nonatomic) TPSNotification *notification;
@property (readonly, copy, nonatomic) TPSAssets *assets;
@property (copy, nonatomic) NSString *availabilityMessage;

+ (id)na_identity;
+ (id)URLWithTipIdentifier:(id)a0 collectionIdentifier:(id)a1 referrer:(id)a2;
+ (id)contentDictionaryForDictionary:(id)a0 fromMatchingClientConditions:(id)a1;
+ (id)deliveryInfoForDictionary:(id)a0;
+ (id)deliveryInfoIdForDictionary:(id)a0;
+ (id)documentsForDictionary:(id)a0;
+ (id)fileIdMapForDictionary:(id)a0;
+ (void)getValuesFromOpenURLSchemeQueryItems:(id)a0 tipIdentifier:(id *)a1 collectionIdentifier:(id *)a2 referrer:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)URLWithReferrer:(id)a0;
- (BOOL)hasWidgetContent;
- (id)initWithDictionary:(id)a0 metadata:(id)a1 identifierKey:(id)a2;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;

@end
