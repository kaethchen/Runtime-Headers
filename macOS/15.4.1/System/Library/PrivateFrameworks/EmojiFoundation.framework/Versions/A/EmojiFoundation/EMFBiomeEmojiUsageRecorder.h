@class NSString, BMSource, NSLocale, NSNumber;

@interface EMFBiomeEmojiUsageRecorder : EMFDPRecorder

@property (retain) BMSource *biomeStream;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) unsigned long long usageSource;
@property (readonly, nonatomic) NSString *replacementContext;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSNumber *resultPosition;
@property (readonly, nonatomic) NSNumber *numberSearchQueriesRun;
@property (readonly, nonatomic) BOOL wasPositiveEngagement;

- (void).cxx_destruct;
- (id)delegate;
- (BOOL)report;
- (id)_createEngagementEvent;
- (id)initWithEmoji:(id)a0 usageSource:(unsigned long long)a1 replacementContext:(id)a2 searchQuery:(id)a3 resultPosition:(id)a4 numberSearchQueriesRun:(id)a5 wasPositiveEngagement:(BOOL)a6;
- (id)recordingKey;

@end
