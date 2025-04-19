@class NSString, NSArray, CLPlacemark, NSNumber, INDateComponentsRange;

@interface INCalendarEvent : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *eventIdentifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSArray *participants;
@property (readonly, copy) CLPlacemark *location;
@property (readonly, copy) NSNumber *isContactBirthday;
@property (readonly, copy) NSString *calendarPunchoutURI;
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
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithEventIdentifier:(id)a0 title:(id)a1 dateTimeRange:(id)a2 participants:(id)a3 location:(id)a4 isContactBirthday:(id)a5 calendarPunchoutURI:(id)a6;

@end
