@class NSString, _INPBSticker;

@interface _INPBMessageReaction : PBCodable <_INPBMessageReaction, NSSecureCoding, NSCopying> {
    struct { unsigned char reactionType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *emoji;
@property (readonly, nonatomic) BOOL hasEmoji;
@property (copy, nonatomic) NSString *reactionDescription;
@property (readonly, nonatomic) BOOL hasReactionDescription;
@property (nonatomic) int reactionType;
@property (nonatomic) BOOL hasReactionType;
@property (retain, nonatomic) _INPBSticker *sticker;
@property (readonly, nonatomic) BOOL hasSticker;
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
- (int)StringAsReactionType:(id)a0;
- (id)reactionTypeAsString:(int)a0;

@end
