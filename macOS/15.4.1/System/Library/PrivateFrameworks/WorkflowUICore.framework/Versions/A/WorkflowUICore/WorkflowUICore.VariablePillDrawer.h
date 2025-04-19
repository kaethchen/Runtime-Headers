@interface WorkflowUICore.VariablePillDrawer : NSObject

+ (id)drawVariableNamed:(id)a0 icon:(id)a1 font:(id)a2 tint:(id)a3 size:(struct CGSize { double x0; double x1; })a4 state:(unsigned long long)a5 isAvailable:(BOOL)a6;
+ (void)drawVariableForAppIconNamed:(id)a0 appIcon:(id)a1 font:(id)a2 tint:(id)a3 size:(struct CGSize { double x0; double x1; })a4 state:(unsigned long long)a5 isAvailable:(BOOL)a6 completionBlock:(id /* block */)a7;

- (id)init;
- (void).cxx_destruct;

@end
