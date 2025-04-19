@class NSString, INCodableLocalizationTable;

@interface INParameterCombination : NSObject <INWidgetPlistRepresentable, NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (nonatomic) BOOL supportsBackgroundExecution;
@property (copy, nonatomic) NSString *titleFormatString;
@property (copy, nonatomic) NSString *titleFormatStringLocID;
@property (copy, nonatomic) NSString *subtitleFormatString;
@property (copy, nonatomic) NSString *subtitleFormatStringLocID;
@property (readonly, copy) NSString *localizedTitleFormatString;
@property (readonly, copy) NSString *localizedSubtitleFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)localizedSubtitleFormatStringWithLocalizer:(id)a0;
- (id)localizedTitleFormatStringWithLocalizer:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;

@end
