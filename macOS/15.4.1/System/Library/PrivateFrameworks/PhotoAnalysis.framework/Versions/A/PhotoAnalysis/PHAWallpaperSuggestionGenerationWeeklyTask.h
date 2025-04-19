@class NSDictionary, NSString;

@interface PHAWallpaperSuggestionGenerationWeeklyTask : NSObject <PHASuggestionGenerationTask> {
    unsigned long long _generationOptions;
    unsigned long long _generatedContent;
}

@property (copy, nonatomic) NSDictionary *suggestionOptionsDictionary;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) BOOL featureAvailable;
@property (readonly, nonatomic) BOOL featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generationOptionNameFromSingleOption:(unsigned long long)a0;
+ (void)sendWallpaperGenerationCompletedBiomeEvent:(id)a0;

- (void).cxx_destruct;
- (int)priority;
- (id)baseSuggestionOptionsWithSubtypes:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (id)generateSuggestionsWithContentMode:(short)a0 suggestionController:(id)a1 progressReporter:(id)a2 shouldReload:(BOOL *)a3;
- (id)generateSuggestionsWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)incrementalKey;
- (id)initWithGenerationOptions:(unsigned long long)a0;
- (BOOL)isGraphDependentSubtype:(unsigned short)a0;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)subtypePredicateWithContentMode:(short)a0;
- (id)suggestionOptionsWithContentMode:(short)a0 isGraphReady:(BOOL)a1 loggingConnection:(id)a2;
- (unsigned char)suggestionProfileForContentMode:(short)a0;
- (BOOL)suggestionsExistInPhotoLibrary:(id)a0 subtypePredicate:(id)a1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
