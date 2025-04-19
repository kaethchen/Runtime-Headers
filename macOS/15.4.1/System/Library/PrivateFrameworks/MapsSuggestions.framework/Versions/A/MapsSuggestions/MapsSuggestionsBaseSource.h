@class NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource> {
    NSString *_name;
}

@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (unsigned long long)addOrUpdateMySuggestionEntries:(id)a0;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (id)initFromResourceDepot:(id)a0;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;

@end
