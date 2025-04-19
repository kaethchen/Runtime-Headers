@class NSString;

@interface GraphRecurrencePattern : NSObject <GraphRecurrenceSerializable>

@property (nonatomic) long long dayOfMonth;
@property (nonatomic) unsigned long long daysOfWeek;
@property (nonatomic) unsigned long long firstDayOfWeek;
@property (nonatomic) unsigned long long index;
@property (nonatomic) long long interval;
@property (nonatomic) unsigned long long month;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daysOfWeekCollectionFrom:(unsigned long long)a0;
+ (unsigned long long)daysOfWeekFromCollection:(id)a0;
+ (BOOL)enumeration:(unsigned long long)a0 hasCase:(unsigned long long)a1;
+ (id)firstDayOfWeekFrom:(unsigned long long)a0;
+ (unsigned long long)firstDayOfWeekFromValue:(id)a0;
+ (id)recurrenceFromDictionary:(id)a0;
+ (id)recurrenceTypeFrom:(unsigned long long)a0;
+ (unsigned long long)recurrenceTypeFromString:(id)a0;
+ (id)weekIndexFrom:(unsigned long long)a0;
+ (unsigned long long)weekIndexFromString:(id)a0;

- (id)init;
- (id)serializedRepresentation;

@end
