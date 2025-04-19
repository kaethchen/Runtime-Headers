@class CNContactStore, _CDInteractionStore, _PSConfidenceModelForSharing, _PSRuleRankingMLModel, NSUserDefaults;
@protocol _DKKnowledgeQuerying;

@interface _PSRuleOverlapFeedback : NSObject

@property (retain, nonatomic) _PSConfidenceModelForSharing *confidenceModelForSharing;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSUserDefaults *ruleOverlapFeedbackDefaults;
@property (retain) _PSRuleRankingMLModel *ruleRankingModel;

- (id)init;
- (void).cxx_destruct;
- (void)writeRecordObjcWithData:(id)a0;

@end
