@class NSString, NSMutableDictionary, MapsSuggestionsQueue;

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject> {
    NSMutableDictionary *_suppressionEntries;
    NSString *_suppressionEntriesFilePath;
    MapsSuggestionsQueue *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (id)initWithFilePath:(id)a0;
- (void)awaitQueue;
- (BOOL)isSuppressedEntry:(id)a0;
- (BOOL)loadSuppressedEntries;
- (BOOL)saveSuppressedEntries;
- (BOOL)suppressEntry:(id)a0 forTime:(double)a1;
- (id)test_dateUntilSuppressedEntry:(id)a0;
- (void)test_deleteSuppressedEntriesFile;

@end
