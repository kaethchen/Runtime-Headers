@class _OSLogEventSerializationMetadata, NSArray, NSEnumerator, NSDate;
@protocol OSLogEventDeserializerDataSourceDelegate;

@interface OSLogDeserializedEventStream : OSLogEventStreamBase

@property (nonatomic) BOOL hasActivated;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;
@property (readonly, nonatomic) id<OSLogEventDeserializerDataSourceDelegate> dataSourceDelegate;
@property (readonly, nonatomic) NSArray *curEventArray;
@property (readonly, nonatomic) NSEnumerator *eventDictionaryEnumerator;
@property (readonly, nonatomic) NSDate *firstDate;
@property (readonly, nonatomic) NSDate *lastDate;

- (void).cxx_destruct;
- (void)activate;
- (id)_eventArrayFromData:(id)a0;
- (void)_iterateThroughEventsWithProxy:(id)a0 filter:(id)a1 startingDate:(id)a2;
- (id)_nextEventDictionary;
- (void)_runInvalidationHandler:(unsigned long long)a0;
- (void)_updateEventArray;
- (void)activateStreamFromDate:(id)a0;
- (id)initWithDataSourceDelegate:(id)a0;

@end
