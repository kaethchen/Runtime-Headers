@class EDPBMessageHeaders;

@interface EDPBInteractionEventMessageSent : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying> {
    struct { unsigned char accountId : 1; unsigned char conversationId : 1; unsigned char mailboxId : 1; unsigned char messageId : 1; unsigned char mailboxType : 1; } _has;
}

@property (nonatomic) long long accountId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) int mailboxType;
@property (nonatomic) long long conversationId;
@property (nonatomic) long long messageId;
@property (nonatomic) BOOL hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) BOOL hasMailboxId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) int mailboxType;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) long long messageId;
@property (readonly, nonatomic) BOOL hasHeaders;
@property (retain, nonatomic) EDPBMessageHeaders *headers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMailboxType:(id)a0;
- (id)mailboxTypeAsString:(int)a0;
- (void)withHasher:(id)a0 setDataFromMessage:(id)a1 account:(id)a2;

@end
