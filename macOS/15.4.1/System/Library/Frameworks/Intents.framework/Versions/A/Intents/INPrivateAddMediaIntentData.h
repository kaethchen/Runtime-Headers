@class NSString, NSArray, NSData, INPrivateMediaIntentData;

@interface INPrivateAddMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) INPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, copy) NSArray *audioSearchResults;
@property (readonly, copy) NSArray *internalSignals;
@property (readonly, copy) NSData *pegasusMetaData;
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
- (id)initWithAudioSearchResults:(id)a0;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1 internalSignals:(id)a2;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1 internalSignals:(id)a2 pegasusMetaData:(id)a3;

@end
