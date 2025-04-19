@class MSPDroppedPin;

@interface MSPPin : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDroppedPin;
@property (retain, nonatomic) MSPDroppedPin *droppedPin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
