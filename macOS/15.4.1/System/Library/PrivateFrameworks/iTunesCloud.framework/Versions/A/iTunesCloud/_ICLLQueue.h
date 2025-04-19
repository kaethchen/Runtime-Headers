@class NSString, NSMutableArray;

@interface _ICLLQueue : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _storefronts;
    NSString *_currentRadioStationId;
    int _demarkationPos;
    int _explicitSetting;
    NSMutableArray *_items;
    NSString *_queueId;
    int _revision;
    struct { unsigned char demarkationPos : 1; unsigned char explicitSetting : 1; unsigned char revision : 1; } _has;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
