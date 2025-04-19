@class SUIBNLRouterSummary, SUIBIntelligenceFlowActionSummary, SUIBIntelligenceFlowProgressUpdate, SUIBIntelligenceFlowStatusNotification;

@interface SUIBRequestProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long progressType;
@property (readonly, nonatomic) SUIBNLRouterSummary *nlRouterSummary;
@property (readonly, nonatomic) SUIBIntelligenceFlowActionSummary *intelligenceFlowActionSummary;
@property (readonly, nonatomic) SUIBIntelligenceFlowProgressUpdate *intelligenceFlowProgressUpdate;
@property (readonly, nonatomic) SUIBIntelligenceFlowStatusNotification *intelligenceFlowStatusNotification;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBuilder:(id /* block */)a0;

@end
