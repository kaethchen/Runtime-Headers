@class NSString, _SFPBCommandReference, _SFPBRFTextProperty, _SFPBRFVisualProperty, NSData;

@interface _SFPBRFAttribution : PBCodable <_SFPBRFAttribution, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *title;
@property (retain, nonatomic) _SFPBRFTextProperty *subtitle;
@property (retain, nonatomic) _SFPBRFVisualProperty *image;
@property (nonatomic) int index;
@property (copy, nonatomic) NSString *localized_index;
@property (copy, nonatomic) NSString *localized_separator;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) _SFPBCommandReference *commandReference;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
