@class SUIBNLRouterSummary, SUIBIntelligenceFlowActionSummary, SUIBIntelligenceFlowProgressUpdate, SUIBIntelligenceFlowStatusNotification;

@interface SUIBRequestProgressMutation : NSObject

@property (nonatomic) unsigned long long progressType;
@property (retain, nonatomic) SUIBNLRouterSummary *nlRouterSummary;
@property (retain, nonatomic) SUIBIntelligenceFlowActionSummary *intelligenceFlowActionSummary;
@property (retain, nonatomic) SUIBIntelligenceFlowProgressUpdate *intelligenceFlowProgressUpdate;
@property (retain, nonatomic) SUIBIntelligenceFlowStatusNotification *intelligenceFlowStatusNotification;

- (void).cxx_destruct;

@end
