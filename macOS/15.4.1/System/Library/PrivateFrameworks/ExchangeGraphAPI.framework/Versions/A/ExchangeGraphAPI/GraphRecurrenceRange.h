@class NSString, NSDateComponents;

@interface GraphRecurrenceRange : NSObject <GraphRecurrenceSerializable>

@property (retain, nonatomic) NSDateComponents *endDate;
@property (nonatomic) long long numberOfOccurrences;
@property (retain, nonatomic) NSString *recurrenceTimeZone;
@property (retain, nonatomic) NSDateComponents *startDate;
@property (nonatomic) unsigned long long recurrenceRangeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recurrenceFromDictionary:(id)a0;
+ (unsigned long long)recurrenceRangeTypeFromString:(id)a0;
+ (id)recurrenceRangeTypeStringFrom:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)serializedRepresentation;

@end
