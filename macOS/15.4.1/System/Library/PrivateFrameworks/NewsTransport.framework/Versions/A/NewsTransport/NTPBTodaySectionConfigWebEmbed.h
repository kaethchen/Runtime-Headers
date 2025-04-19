@class NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying> {
    struct { unsigned char preferredSlotAllocation : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUrlString;
@property (retain, nonatomic) NSString *urlString;
@property (nonatomic) BOOL hasPreferredSlotAllocation;
@property (nonatomic) unsigned long long preferredSlotAllocation;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
