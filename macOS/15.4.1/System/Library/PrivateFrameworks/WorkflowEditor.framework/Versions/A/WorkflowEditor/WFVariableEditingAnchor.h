@class WFVariable, WFParameter;
@protocol WFVariableProvider;

@interface WFVariableEditingAnchor : NSObject

@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, nonatomic) WFParameter *parameter;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

@end
