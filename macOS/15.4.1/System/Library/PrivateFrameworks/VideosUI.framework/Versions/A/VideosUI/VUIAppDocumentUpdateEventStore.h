@class NSArray, NSMutableDictionary;

@interface VUIAppDocumentUpdateEventStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor;
@property (readonly, copy, nonatomic) NSArray *events;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (void)addEvents:(id)a0;
- (void)removeAllEvents;
- (void)removeEvent:(id)a0;

@end
