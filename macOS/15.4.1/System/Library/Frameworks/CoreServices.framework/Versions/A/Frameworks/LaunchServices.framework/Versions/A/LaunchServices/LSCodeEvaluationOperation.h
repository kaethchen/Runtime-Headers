@class NSUUID, LSCodeEvaluationInfo;

@interface LSCodeEvaluationOperation : NSObject

@property (copy) NSUUID *identifier;
@property (copy) LSCodeEvaluationInfo *info;
@property (copy) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0 handler:(id /* block */)a1;

@end
