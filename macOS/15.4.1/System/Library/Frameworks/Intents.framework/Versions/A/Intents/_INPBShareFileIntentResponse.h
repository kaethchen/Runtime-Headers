@class NSArray, NSString;

@interface _INPBShareFileIntentResponse : PBCodable <_INPBShareFileIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char confirm : 1; unsigned char shareMode : 1; unsigned char success : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL confirm;
@property (nonatomic) BOOL hasConfirm;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (nonatomic) BOOL hasShareMode;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)recipientsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRecipients:(id)a0;
- (void)clearRecipients;
- (int)StringAsShareMode:(id)a0;
- (id)recipientsAtIndex:(unsigned long long)a0;
- (id)shareModeAsString:(int)a0;

@end
