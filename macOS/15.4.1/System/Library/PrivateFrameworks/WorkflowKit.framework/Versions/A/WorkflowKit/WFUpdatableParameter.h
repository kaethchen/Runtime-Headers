@class NSString, WFDialogAttribution, WFDialogRequest;
@protocol WFParameterState;

@interface WFUpdatableParameter : WFParameter <WFParameterDialogProvider> {
    void /* unknown type, empty encoding */ stateDataSource;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ underlyingParameter;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (void)createDialogRequestWithAttribution:(WFDialogAttribution *)a0 defaultState:(id<WFParameterState>)a1 prompt:(NSString *)a2 completionHandler:(void (^)(WFDialogRequest *))a3;
- (id)localizedLabelWithContext:(id)a0;
- (id)parameterStateFromDialogResponse:(id)a0;
- (Class)toolkitStateClass;

@end
