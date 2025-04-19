@class NSArray, NSDictionary, MLModel, TRIClient;
@protocol TRINotificationToken;

@interface _PSTrialClientGuardedData : NSObject {
    TRIClient *_trialClient;
    NSDictionary *_recipe;
    MLModel *_rankingModel;
    NSArray *_suggestionProxyOrder;
    id<TRINotificationToken> _token;
}

- (void).cxx_destruct;

@end
