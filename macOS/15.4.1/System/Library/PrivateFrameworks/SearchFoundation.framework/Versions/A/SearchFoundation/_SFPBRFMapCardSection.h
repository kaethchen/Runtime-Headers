@class NSArray, NSData, NSString;

@interface _SFPBRFMapCardSection : PBCodable <_SFPBRFMapCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int sizeFormat;
@property (copy, nonatomic) NSArray *markers;
@property (copy, nonatomic) NSArray *annotations;
@property (copy, nonatomic) NSArray *polylines;
@property (nonatomic) double cameraDistance;
@property (nonatomic) BOOL showsUserLocation;
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
- (void)addAnnotations:(id)a0;
- (void)addPolyline:(id)a0;
- (id)initWithFacade:(id)a0;
- (id)markersAtIndex:(unsigned long long)a0;
- (void)addMarkers:(id)a0;
- (id)annotationsAtIndex:(unsigned long long)a0;
- (unsigned long long)annotationsCount;
- (void)clearAnnotations;
- (void)clearMarkers;
- (void)clearPolyline;
- (unsigned long long)markersCount;
- (id)polylineAtIndex:(unsigned long long)a0;
- (unsigned long long)polylineCount;
- (void)setPolyline:(id)a0;

@end
