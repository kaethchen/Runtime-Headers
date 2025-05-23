@class NSString;

@interface WFPBAutoShortcutToggleEvent : PBCodable <NSCopying> {
    struct { unsigned char enabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL hasToggleType;
@property (retain, nonatomic) NSString *toggleType;

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
