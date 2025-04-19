@class INSpeakableString, NSString;

@interface INTimer : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) INSpeakableString *label;
@property (readonly) double duration;
@property (readonly) double remainingTime;
@property (readonly, copy) NSString *identifier;
@property (readonly) long long state;
@property (readonly) long long type;
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
- (id)initWithLabel:(id)a0 duration:(double)a1 remainingTime:(double)a2 identifier:(id)a3 state:(long long)a4;
- (id)initWithLabel:(id)a0 duration:(double)a1 remainingTime:(double)a2 identifier:(id)a3 state:(long long)a4 type:(long long)a5;

@end
