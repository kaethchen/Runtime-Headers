@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackConversation : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_messages;
}

@property (retain, nonatomic) NSMutableArray *messages;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)messageType;
+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)messageAtIndex:(unsigned long long)a0;
- (void)addMessage:(id)a0;
- (void)clearMessages;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)messagesCount;
- (void)readAll:(BOOL)a0;

@end
