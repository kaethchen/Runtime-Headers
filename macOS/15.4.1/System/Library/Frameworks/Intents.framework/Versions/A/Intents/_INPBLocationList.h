@class NSArray, _INPBCondition, NSString;

@interface _INPBLocationList : PBCodable <_INPBLocationList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCondition *condition;
@property (readonly, nonatomic) BOOL hasCondition;
@property (copy, nonatomic) NSArray *locations;
@property (readonly, nonatomic) unsigned long long locationsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)locationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocation:(id)a0;
- (void)clearLocations;
- (id)locationAtIndex:(unsigned long long)a0;

@end
