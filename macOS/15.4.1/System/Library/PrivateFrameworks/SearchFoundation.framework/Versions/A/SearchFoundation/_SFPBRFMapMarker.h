@class _SFPBRFColor, _SFPBRFMapMarkerText, NSString, _SFPBRFMapMarkerImage, NSData, _SFPBRFMapMarkerIdentifier;

@interface _SFPBRFMapMarker : PBCodable <_SFPBRFMapMarker, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFMapMarkerIdentifier *identifier;
@property (retain, nonatomic) _SFPBRFMapMarkerText *text;
@property (retain, nonatomic) _SFPBRFMapMarkerImage *image;
@property (retain, nonatomic) _SFPBRFColor *tint;
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
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
