@class NSArray, _INPBCondition, NSString;

@interface _INPBActivityList : PBCodable <_INPBActivityList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *activities;
@property (readonly, nonatomic) unsigned long long activitiesCount;
@property (retain, nonatomic) _INPBCondition *condition;
@property (readonly, nonatomic) BOOL hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)activityType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearActivities;
- (id)activityAtIndex:(unsigned long long)a0;
- (void)addActivity:(id)a0;

@end
