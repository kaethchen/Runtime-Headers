@class NSString, NSArray, _INPBContact, _INPBString, _INPBIntentMetadata, _INPBDataString;

@interface _INPBSendMessageIntent : PBCodable <_INPBSendMessageIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char effect : 1; unsigned char outgoingMessageType : 1; unsigned char shouldHideSiriAttribution : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *alternativeConversationIdentifier;
@property (readonly, nonatomic) BOOL hasAlternativeConversationIdentifier;
@property (copy, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) unsigned long long attachmentsCount;
@property (retain, nonatomic) _INPBString *content;
@property (readonly, nonatomic) BOOL hasContent;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) BOOL hasConversationIdentifier;
@property (nonatomic) int effect;
@property (nonatomic) BOOL hasEffect;
@property (retain, nonatomic) _INPBString *groupName;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSString *notificationThreadIdentifier;
@property (readonly, nonatomic) BOOL hasNotificationThreadIdentifier;
@property (nonatomic) int outgoingMessageType;
@property (nonatomic) BOOL hasOutgoingMessageType;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (retain, nonatomic) _INPBContact *sender;
@property (readonly, nonatomic) BOOL hasSender;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (nonatomic) BOOL shouldHideSiriAttribution;
@property (nonatomic) BOOL hasShouldHideSiriAttribution;
@property (retain, nonatomic) _INPBDataString *speakableGroupName;
@property (readonly, nonatomic) BOOL hasSpeakableGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)attachmentsType;
+ (Class)recipientType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAttachments:(id)a0;
- (void)addRecipient:(id)a0;
- (int)StringAsOutgoingMessageType:(id)a0;
- (void)clearRecipients;
- (int)StringAsEffect:(id)a0;
- (id)effectAsString:(int)a0;
- (id)attachmentsAtIndex:(unsigned long long)a0;
- (void)clearAttachments;
- (id)outgoingMessageTypeAsString:(int)a0;
- (id)recipientAtIndex:(unsigned long long)a0;

@end
