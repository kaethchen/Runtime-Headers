@class NSString;

@interface BCSBusinessLinkContent : PBCodable <NSCopying> {
    struct { unsigned char isDefault : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasIsDefault;
@property (nonatomic) BOOL isDefault;

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

@end
