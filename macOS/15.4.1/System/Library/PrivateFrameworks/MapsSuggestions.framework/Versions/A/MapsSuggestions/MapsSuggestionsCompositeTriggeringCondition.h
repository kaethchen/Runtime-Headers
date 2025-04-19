@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsCompositeTriggeringCondition : MapsSuggestionsTriggeringToggle <MapsSuggestionsTriggerObserver> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSArray *_triggers;
    NSArray *_conditions;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isTrue;
- (void)addCondition:(id)a0;
- (void)addConditions:(id)a0;
- (void)addTrigger:(id)a0;
- (void)addTriggers:(id)a0;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)a0 startState:(BOOL)a1;
- (id)initWithName:(id)a0 startState:(BOOL)a1 behavior:(unsigned long long)a2;
- (id)initWithName:(id)a0 startState:(BOOL)a1 behavior:(unsigned long long)a2 triggers:(id)a3 conditions:(id)a4;
- (id)initWithName:(id)a0 startState:(BOOL)a1 triggers:(id)a2 conditions:(id)a3;
- (id)objectForJSON;
- (void)triggerFired:(id)a0;

@end
