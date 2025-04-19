@class NSString, NSNumber, BMDistributedContextTranslatedEventMessage;

@interface BMDistributedContextContextChangedMessage : NSObject

@property (retain, nonatomic) NSString *subscriptionIdentifier;
@property (retain, nonatomic) BMDistributedContextTranslatedEventMessage *translatedEvent;
@property (retain, nonatomic) NSString *messageVersion;
@property (retain, nonatomic) NSNumber *protocolVersion;
@property (nonatomic) unsigned long long messageIntent;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithMessageDictionary:(id)a0;
- (id)initWithSubscriptionIdentifier:(id)a0 translatedEvent:(id)a1 messageIntent:(unsigned long long)a2;

@end
