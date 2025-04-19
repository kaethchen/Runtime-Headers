@class NSString;

@interface CADStatsCallback : CADStatCollector {
    NSString *_eventName;
    id /* block */ _callback;
}

- (void).cxx_destruct;
- (id)eventName;
- (id)eventDictionaries;
- (id)initWithEventName:(id)a0 callback:(id /* block */)a1;

@end
