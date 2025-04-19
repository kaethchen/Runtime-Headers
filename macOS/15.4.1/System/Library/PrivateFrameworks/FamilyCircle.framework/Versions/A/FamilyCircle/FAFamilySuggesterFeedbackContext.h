@class NSArray, _PSPredictionContext;

@interface FAFamilySuggesterFeedbackContext : NSObject

@property (readonly, nonatomic) _PSPredictionContext *peopleSuggesterPredictionContext;
@property (readonly, nonatomic) NSArray *peopleSuggesterSuggestions;
@property (readonly, nonatomic) long long megadomeFeedbackEventId;

- (void).cxx_destruct;
- (id)initWithMegadomeFeedbackEventID:(long long)a0;
- (id)initWithPredictionContext:(id)a0 suggestions:(id)a1;

@end
