@class NSString, _INPBDecimalNumberValue;

@interface _INPBRideFareLineItem : PBCodable <_INPBRideFareLineItem, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (retain, nonatomic) _INPBDecimalNumberValue *price;
@property (readonly, nonatomic) BOOL hasPrice;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasTitle;
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

@end
