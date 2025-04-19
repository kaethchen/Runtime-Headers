@class NSArray, _SFPBButtonItem, NSData, _SFPBRFTextProperty, _SFPBRFVisualProperty, NSString;

@interface _SFPBRFSummaryItemPairNumberCardSection : PBCodable <_SFPBRFSummaryItemPairNumberCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *number_1;
@property (retain, nonatomic) _SFPBRFTextProperty *number_2;
@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (retain, nonatomic) _SFPBRFTextProperty *text_2;
@property (retain, nonatomic) _SFPBRFTextProperty *text_3;
@property (retain, nonatomic) _SFPBRFTextProperty *text_4;
@property (copy, nonatomic) NSArray *text_5s;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail_1;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail_2;
@property (retain, nonatomic) _SFPBRFTextProperty *text_6;
@property (retain, nonatomic) _SFPBRFTextProperty *text_7;
@property (retain, nonatomic) _SFPBButtonItem *button_1;
@property (retain, nonatomic) _SFPBRFTextProperty *text_8;
@property (retain, nonatomic) _SFPBRFTextProperty *text_9;
@property (retain, nonatomic) _SFPBRFTextProperty *text_10;
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
- (void)addText_5:(id)a0;
- (void)clearText_5;
- (void)setText_5:(id)a0;
- (id)text_5AtIndex:(unsigned long long)a0;
- (unsigned long long)text_5Count;

@end
