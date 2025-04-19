@class NSString, NSArray, NSDateComponents, INSpeakableString;

@interface INTaskList : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long taskListType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) INSpeakableString *title;
@property (readonly, copy) NSArray *tasks;
@property (readonly, copy) INSpeakableString *groupName;
@property (readonly, copy) NSDateComponents *createdDateComponents;
@property (readonly, copy) NSDateComponents *modifiedDateComponents;
@property (readonly, copy) NSString *identifier;
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
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithTitle:(id)a0 tasks:(id)a1 groupName:(id)a2 createdDateComponents:(id)a3 modifiedDateComponents:(id)a4 identifier:(id)a5;
- (id)initWithTitle:(id)a0 tasks:(id)a1 groupName:(id)a2 taskListType:(long long)a3 createdDateComponents:(id)a4 modifiedDateComponents:(id)a5 identifier:(id)a6;

@end
