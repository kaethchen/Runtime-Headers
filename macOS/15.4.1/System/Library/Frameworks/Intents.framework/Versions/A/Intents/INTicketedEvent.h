@class NSString, CLPlacemark, INDateComponentsRange;

@interface INTicketedEvent : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long category;
@property (readonly, copy) NSString *name;
@property (readonly, copy) INDateComponentsRange *eventDuration;
@property (readonly, copy) CLPlacemark *location;
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
- (id)initWithCategory:(long long)a0 name:(id)a1 eventDuration:(id)a2 location:(id)a3;

@end
