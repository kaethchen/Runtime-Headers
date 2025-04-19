@class NSData, NSString, RFMapPoint, SFLatLng, RFTextProperty, NSDictionary, RFVisualProperty;

@interface RFMapAnnotation : NSObject <RFMapAnnotation, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFLatLng *coordinate;
@property (retain, nonatomic) RFVisualProperty *content;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) RFMapPoint *anchor;
@property (retain, nonatomic) RFTextProperty *label;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;

@end
