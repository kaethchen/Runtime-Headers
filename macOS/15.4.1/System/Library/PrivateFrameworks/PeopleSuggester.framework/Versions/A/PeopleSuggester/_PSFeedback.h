@class _PSPredictionContext, NSArray, NSString, _PSFeedbackAction;

@interface _PSFeedback : NSObject

@property (nonatomic) BOOL dryRun;
@property (readonly, nonatomic) _PSFeedbackAction *action;
@property (readonly, nonatomic) unsigned long long indexOfEngagedSuggestion;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) _PSPredictionContext *context;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) float numberOfVisibleSuggestions;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BOOL isAirDropEvent;
@property (readonly, nonatomic) BOOL wasAirDropShown;

+ (id)feedbackForAction:(id)a0 delay:(double)a1 context:(id)a2 suggestions:(id)a3 numberOfVisibleSuggestions:(float)a4 sessionIdentifier:(id)a5;
+ (id)feedbackForActionWithAirdrop:(id)a0 delay:(double)a1 context:(id)a2 suggestions:(id)a3 numberOfVisibleSuggestions:(float)a4 sessionIdentifier:(id)a5 isAirDropEvent:(BOOL)a6 wasAirDropShown:(BOOL)a7;

- (void).cxx_destruct;
- (void)donateToBiome;
- (id)feedbackPayloadShowFamily:(id)a0;
- (id)getTrialID;
- (id)initWithAction:(id)a0 delay:(double)a1 context:(id)a2 suggestions:(id)a3 numberOfVisibleSuggestions:(float)a4 sessionIdentifier:(id)a5 isAirDropEvent:(BOOL)a6 wasAirDropShown:(BOOL)a7;

@end
