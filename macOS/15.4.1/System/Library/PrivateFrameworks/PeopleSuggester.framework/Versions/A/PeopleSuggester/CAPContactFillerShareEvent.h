@class NSMutableArray, CAPContactFillerUserEvent;

@interface CAPContactFillerShareEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contactEvents;
@property (retain, nonatomic) CAPContactFillerUserEvent *userEvent;

+ (Class)contactEventType;

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
- (void)addContactEvent:(id)a0;
- (void)clearContactEvents;
- (id)contactEventAtIndex:(unsigned long long)a0;
- (unsigned long long)contactEventsCount;

@end
