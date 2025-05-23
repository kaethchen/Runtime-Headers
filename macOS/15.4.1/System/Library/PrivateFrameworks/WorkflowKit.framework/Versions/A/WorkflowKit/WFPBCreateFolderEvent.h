@class NSString;

@interface WFPBCreateFolderEvent : PBCodable <NSCopying> {
    struct { unsigned char icon : 1; unsigned char shortcutCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) unsigned int icon;
@property (nonatomic) BOOL hasShortcutCount;
@property (nonatomic) unsigned int shortcutCount;
@property (readonly, nonatomic) BOOL hasFolderSource;
@property (retain, nonatomic) NSString *folderSource;

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
