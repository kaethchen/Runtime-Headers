@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)track;
- (id)propertyNames;
- (Class)codableEventClass;
- (id)coreAnalyticsKey;
- (id)serializableEvent;

@end
