@class NSString, NSArray, NSError, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsAction;

@interface MapsSuggestionsActionCircuit : NSObject <MapsSuggestionsTriggerObserver, MapsSuggestionsCircuit> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    struct _Config { NSString *name; MapsSuggestionsObservers *observers; id<MapsSuggestionsAction> action; NSArray *triggers; NSArray *conditions; unsigned long long type; } _config;
    struct _State { NSString *firedTriggerName; NSString *failedConditionName; NSError *lastError; BOOL active; } _state;
}

@property (readonly, nonatomic) struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } dispatchQueue;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAction:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)addCondition:(id)a0;
- (void)addTrigger:(id)a0;
- (void)removeCondition:(id)a0;
- (void)removeTrigger:(id)a0;
- (void)awaitQueue;
- (id)initWithTriggers:(id)a0 action:(id)a1;
- (id)initWithTriggers:(id)a0 conditions:(id)a1 action:(id)a2;
- (id)initWithTriggers:(id)a0 conditions:(id)a1 type:(unsigned long long)a2 action:(id)a3;
- (id)nameForJSON;
- (id)objectForJSON;
- (void)triggerFired:(id)a0;

@end
