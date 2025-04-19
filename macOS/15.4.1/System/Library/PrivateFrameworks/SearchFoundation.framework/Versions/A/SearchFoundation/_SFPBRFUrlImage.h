@class _SFPBRFColor, NSString, _SFPBRFAspectRatio, _SFPBRFSymbolImage, NSData;

@interface _SFPBRFUrlImage : PBCodable <_SFPBRFUrlImage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *dark_mode_url;
@property (retain, nonatomic) _SFPBRFSymbolImage *symbol_placeholder_image;
@property (nonatomic) int image_style;
@property (retain, nonatomic) _SFPBRFAspectRatio *aspect_ratio;
@property (nonatomic) int sizing_mode;
@property (nonatomic) int image_rendering_mode;
@property (retain, nonatomic) _SFPBRFColor *background_color;
@property (nonatomic) int corner_rounding_mode;
@property (nonatomic) float inset_padding;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPlaceholder_Image;
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
