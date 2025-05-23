@class _INPBRangeValue, _INPBPriceRangeValue, NSString;

@interface _INPBRidePartySizeOption : PBCodable <_INPBRidePartySizeOption, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBRangeValue *partySizeRange;
@property (readonly, nonatomic) BOOL hasPartySizeRange;
@property (retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property (readonly, nonatomic) BOOL hasPriceRange;
@property (copy, nonatomic) NSString *sizeDescription;
@property (readonly, nonatomic) BOOL hasSizeDescription;
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
