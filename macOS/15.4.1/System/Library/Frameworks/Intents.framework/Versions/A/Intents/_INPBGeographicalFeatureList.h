@class NSArray, _INPBCondition, NSString;

@interface _INPBGeographicalFeatureList : PBCodable <_INPBGeographicalFeatureList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCondition *condition;
@property (readonly, nonatomic) BOOL hasCondition;
@property (copy, nonatomic) NSArray *geographicalFeatures;
@property (readonly, nonatomic) unsigned long long geographicalFeaturesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)geographicalFeatureType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addGeographicalFeature:(id)a0;
- (void)clearGeographicalFeatures;
- (id)geographicalFeatureAtIndex:(unsigned long long)a0;

@end
