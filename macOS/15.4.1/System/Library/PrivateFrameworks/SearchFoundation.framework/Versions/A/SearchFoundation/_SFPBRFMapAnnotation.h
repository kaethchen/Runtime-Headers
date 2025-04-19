@class NSData, NSString, _SFPBLatLng, _SFPBRFVisualProperty, _SFPBRFMapPoint, _SFPBRFTextProperty;

@interface _SFPBRFMapAnnotation : PBCodable <_SFPBRFMapAnnotation, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBLatLng *coordinate;
@property (retain, nonatomic) _SFPBRFVisualProperty *content;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBRFMapPoint *anchor;
@property (retain, nonatomic) _SFPBRFTextProperty *label;
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
