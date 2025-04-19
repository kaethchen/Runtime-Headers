@class NSString, NSMutableArray;

@interface InteractionAnalysisPETInteractionEvents : PBCodable <NSCopying> {
    NSString *_deviceID;
    NSMutableArray *_interactionEvents;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
