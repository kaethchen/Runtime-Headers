@class NSString, CLPlacemark, INDateComponentsRange;

@interface INBoatTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *provider;
@property (readonly, copy) NSString *boatName;
@property (readonly, copy) NSString *boatNumber;
@property (readonly, copy) INDateComponentsRange *tripDuration;
@property (readonly, copy) CLPlacemark *departureBoatTerminalLocation;
@property (readonly, copy) CLPlacemark *arrivalBoatTerminalLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithProvider:(id)a0 boatName:(id)a1 boatNumber:(id)a2 tripDuration:(id)a3 departureBoatTerminalLocation:(id)a4 arrivalBoatTerminalLocation:(id)a5;

@end
