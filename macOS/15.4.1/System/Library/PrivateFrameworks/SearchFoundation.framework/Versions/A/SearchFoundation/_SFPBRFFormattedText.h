@class NSData, NSString, _SFPBRFColor, NSArray, _SFPBRFFont, _SFPBRFTextEncapsulation, _SFPBRFImageElement, _SFPBRFEngageable, _SFPBRFOptionalBool;

@interface _SFPBRFFormattedText : PBCodable <_SFPBRFFormattedText, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) _SFPBRFImageElement *inline_image_element;
@property (retain, nonatomic) _SFPBRFColor *color;
@property (retain, nonatomic) _SFPBRFOptionalBool *is_italic;
@property (retain, nonatomic) _SFPBRFOptionalBool *is_bold;
@property (retain, nonatomic) _SFPBRFTextEncapsulation *text_encapsulation;
@property (retain, nonatomic) _SFPBRFOptionalBool *is_highlighted;
@property (retain, nonatomic) _SFPBRFColor *background_color;
@property (copy, nonatomic) NSArray *attributions;
@property (copy, nonatomic) NSArray *highlighted_substrings;
@property (retain, nonatomic) _SFPBRFFont *font;
@property (retain, nonatomic) _SFPBRFOptionalBool *is_underlined;
@property (retain, nonatomic) _SFPBRFEngageable *engageable;
@property (nonatomic) int weight;
@property (nonatomic) int design;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
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
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addAttributions:(id)a0;
- (void)addHighlighted_substrings:(id)a0;
- (id)attributionsAtIndex:(unsigned long long)a0;
- (void)clearHighlighted_substrings;
- (id)highlighted_substringsAtIndex:(unsigned long long)a0;
- (unsigned long long)highlighted_substringsCount;

@end
