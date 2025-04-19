@class NSString, NSBundle, NSArray;

@interface BRLTTable : NSObject <NSCopying>

@property (retain, nonatomic) NSBundle *_bundle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) NSString *tableIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameWithService;
@property (readonly, nonatomic) NSString *localizedLanguage;
@property (readonly, nonatomic) NSString *localizedVariant;
@property (readonly, nonatomic) NSString *localizedService;
@property (readonly, nonatomic) BOOL supportsTranslationModeContracted;
@property (readonly, nonatomic) BOOL supportsTranslationMode8Dot;
@property (readonly, nonatomic) BOOL isCustomBrailleTable;
@property (readonly, nonatomic) BOOL supportsTranslationByCell;
@property (readonly, nonatomic) NSString *candidateSelectionLanguage;
@property (readonly, nonatomic) NSArray *replacements;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)_brailleTableDictionary;
- (BOOL)_isEqualToTable:(id)a0;
- (id)initWithServiceIdentifier:(id)a0 language:(id)a1 variant:(id)a2;
- (id)initWithServiceIdentifier:(id)a0 tableIdentifier:(id)a1;

@end
