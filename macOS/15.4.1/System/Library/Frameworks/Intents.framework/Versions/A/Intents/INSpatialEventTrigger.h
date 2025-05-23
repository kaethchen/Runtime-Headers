@class NSArray, CLPlacemark, NSString;

@interface INSpatialEventTrigger : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *suggestedValues;
@property (readonly) long long mobileSpace;
@property (readonly, copy) CLPlacemark *placemark;
@property (readonly) long long event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithMobileSpace:(long long)a0 event:(long long)a1;
- (id)initWithPlacemark:(id)a0 event:(long long)a1;
- (id)initWithPlacemark:(id)a0 event:(long long)a1 suggestedValues:(id)a2 mobileSpace:(long long)a3;

@end
