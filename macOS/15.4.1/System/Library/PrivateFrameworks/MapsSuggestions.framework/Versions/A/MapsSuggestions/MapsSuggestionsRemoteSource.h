@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsRemoteSource : MapsSuggestionsBaseSource <MapsSuggestionsSourceDelegateProxy, MapsSuggestionsSource> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)Debug_updateGraph;
- (void)addOrUpdateSuggestionEntriesData:(id)a0 sourceNameData:(id)a1 handler:(id /* block */)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;

@end
