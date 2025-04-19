@interface ATXComplicationSuggestionHeuristicsCache : NSObject

@property (nonatomic) unsigned long long numBluetoothConnectionsOverLastWeek;
@property (nonatomic) unsigned long long numCalendarEventsOverLastAndNextWeek;
@property (nonatomic) unsigned long long numRemindersOverLastWeek;

@end
