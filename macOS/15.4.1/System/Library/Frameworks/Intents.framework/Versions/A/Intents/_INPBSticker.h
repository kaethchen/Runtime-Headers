@class NSString;

@interface _INPBSticker : PBCodable <_INPBSticker, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) BOOL hasAppBundleID;
@property (copy, nonatomic) NSString *avatarDescriptor;
@property (readonly, nonatomic) BOOL hasAvatarDescriptor;
@property (copy, nonatomic) NSString *emoji;
@property (readonly, nonatomic) BOOL hasEmoji;
@property (copy, nonatomic) NSString *stickerDescription;
@property (readonly, nonatomic) BOOL hasStickerDescription;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
