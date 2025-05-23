@class LNDisplayRepresentation, LNValue, LNEntityIdentifier, NSNumber;

@interface LNViewEntity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNEntityIdentifier *identifier;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) struct LNViewLocation { double x; double y; double z; double width; double height; double depth; } location;
@property (readonly, nonatomic) NSNumber *interactionId;
@property (readonly, nonatomic) long long structuredDataRepresentations;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) LNDisplayRepresentation *displayRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 interactionID:(id)a1 location:(struct LNViewLocation { double x0; double x1; double x2; double x3; double x4; double x5; })a2 structuredDataRepresentations:(long long)a3 displayRepresentation:(id)a4 state:(long long)a5;
- (id)initWithIdentifier:(id)a0 interactionId:(id)a1 location:(struct LNViewLocation { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)initWithIdentifier:(id)a0 interactionId:(id)a1 location:(struct LNViewLocation { double x0; double x1; double x2; double x3; double x4; double x5; })a2 structuredDataRepresentations:(long long)a3;

@end
