@class WFVariableEditingAnchor;

@interface WFVariableEditingOptions : NSObject

@property (copy, nonatomic) id /* block */ onChange;
@property (copy, nonatomic) id /* block */ onFinish;
@property (readonly, nonatomic) WFVariableEditingAnchor *anchor;
@property (readonly, nonatomic) unsigned long long resultType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)finishEditingReturningToKeyboard:(BOOL)a0;
- (id)initWithAnchor:(id)a0 resultType:(unsigned long long)a1 onChange:(id /* block */)a2 onFinish:(id /* block */)a3;
- (void)variableDidChange:(id)a0;

@end
