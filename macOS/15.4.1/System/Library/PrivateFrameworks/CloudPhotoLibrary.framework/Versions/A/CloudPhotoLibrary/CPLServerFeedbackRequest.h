@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *messages;

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
- (void)clearMessages;
- (unsigned long long)messagesCount;
- (void)addMessages:(id)a0;
- (id)messagesAtIndex:(unsigned long long)a0;

@end
