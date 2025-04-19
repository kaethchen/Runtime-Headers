@class NSString, NSDictionary, NSArray, NSDate;

@interface VUISportsScoreboardViewModel : NSObject {
    NSDictionary *_dictionaryRepresentation;
    BOOL _suppressed;
}

@property (readonly, nonatomic) NSString *canonicalId;
@property (readonly, nonatomic) NSString *leagueId;
@property (readonly, nonatomic) NSDictionary *leagueContext;
@property (readonly, nonatomic) NSArray *scores;
@property (readonly, nonatomic) BOOL showScoreboard;
@property (nonatomic) BOOL configureScoreUpdates;
@property (readonly, nonatomic) BOOL isVersus;
@property (readonly, nonatomic) BOOL hasEventEnded;
@property (readonly, nonatomic) NSDate *lastUpdatedTime;
@property (readonly, nonatomic) NSDictionary *contentMetadata;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)jsContextDictionary;
- (void)removeUnicodeFromScoreValuesIfNeeded;

@end
