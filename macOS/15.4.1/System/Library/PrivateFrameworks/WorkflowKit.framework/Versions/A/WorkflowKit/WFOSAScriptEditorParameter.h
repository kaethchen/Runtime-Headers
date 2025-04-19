@class NSString, WFMacHelper;
@protocol WFOSAScriptEditorParameterDelegate;

@interface WFOSAScriptEditorParameter : WFParameter

@property (retain, nonatomic) WFMacHelper *scriptRunner;
@property (readonly, nonatomic) NSString *languageName;
@property (weak, nonatomic) id<WFOSAScriptEditorParameterDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (void)compileScriptWithCompletionHandler:(id /* block */)a0;

@end
