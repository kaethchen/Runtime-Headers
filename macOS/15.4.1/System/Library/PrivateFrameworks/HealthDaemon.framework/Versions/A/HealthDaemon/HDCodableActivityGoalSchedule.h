@class NSString, HDCodableSample;

@interface HDCodableActivityGoalSchedule : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char fridayGoal : 1; unsigned char goalType : 1; unsigned char mondayGoal : 1; unsigned char saturdayGoal : 1; unsigned char sundayGoal : 1; unsigned char thursdayGoal : 1; unsigned char tuesdayGoal : 1; unsigned char wednesdayGoal : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasGoalType;
@property (nonatomic) long long goalType;
@property (readonly, nonatomic) BOOL hasUnitString;
@property (retain, nonatomic) NSString *unitString;
@property (nonatomic) BOOL hasMondayGoal;
@property (nonatomic) double mondayGoal;
@property (nonatomic) BOOL hasTuesdayGoal;
@property (nonatomic) double tuesdayGoal;
@property (nonatomic) BOOL hasWednesdayGoal;
@property (nonatomic) double wednesdayGoal;
@property (nonatomic) BOOL hasThursdayGoal;
@property (nonatomic) double thursdayGoal;
@property (nonatomic) BOOL hasFridayGoal;
@property (nonatomic) double fridayGoal;
@property (nonatomic) BOOL hasSaturdayGoal;
@property (nonatomic) double saturdayGoal;
@property (nonatomic) BOOL hasSundayGoal;
@property (nonatomic) double sundayGoal;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)applyToObject:(id)a0;

@end
