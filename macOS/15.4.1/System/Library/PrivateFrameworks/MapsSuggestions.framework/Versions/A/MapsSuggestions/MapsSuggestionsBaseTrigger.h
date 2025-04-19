@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBaseTrigger : NSObject <MapsSuggestionsTrigger> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    MapsSuggestionsObservers *_observers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)dispatchQueue;
- (void)unregisterObserver:(id)a0;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)registerObserver:(id)a0;
- (BOOL)hasObservers;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)nameForJSON;
- (id)objectForJSON;
- (void)triggerMyObservers;

@end
