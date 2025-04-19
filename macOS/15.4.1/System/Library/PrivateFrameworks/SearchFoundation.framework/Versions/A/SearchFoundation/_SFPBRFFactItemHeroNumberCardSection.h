@class NSArray, NSString, NSData, _SFPBRFTextProperty;

@interface _SFPBRFFactItemHeroNumberCardSection : PBCodable <_SFPBRFFactItemHeroNumberCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *number;
@property (retain, nonatomic) _SFPBRFTextProperty *unit;
@property (copy, nonatomic) NSArray *text_2s;
@property (copy, nonatomic) NSArray *text_3s;
@property (retain, nonatomic) _SFPBRFTextProperty *text_4;
@property (retain, nonatomic) _SFPBRFTextProperty *text_5;
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
- (void)addText_2:(id)a0;
- (void)addText_3:(id)a0;
- (void)clearText_2;
- (void)clearText_3;
- (void)setText_2:(id)a0;
- (void)setText_3:(id)a0;
- (id)text_2AtIndex:(unsigned long long)a0;
- (unsigned long long)text_2Count;
- (id)text_3AtIndex:(unsigned long long)a0;
- (unsigned long long)text_3Count;

@end
