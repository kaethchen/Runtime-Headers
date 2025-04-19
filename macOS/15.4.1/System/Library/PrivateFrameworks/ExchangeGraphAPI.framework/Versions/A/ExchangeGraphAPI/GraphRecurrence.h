@class NSString, GraphRecurrencePattern, GraphRecurrenceRange;

@interface GraphRecurrence : NSObject <GraphRecurrenceSerializable>

@property (retain, nonatomic) GraphRecurrencePattern *pattern;
@property (retain, nonatomic) GraphRecurrenceRange *range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recurrenceFromDictionary:(id)a0;
+ (id)recurrenceFromJSONDictionary:(id)a0;

@end
