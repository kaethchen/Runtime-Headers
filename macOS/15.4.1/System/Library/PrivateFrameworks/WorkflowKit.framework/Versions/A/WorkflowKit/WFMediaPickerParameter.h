@class WFAction;

@interface WFMediaPickerParameter : WFParameter

@property (weak, nonatomic) WFAction *action;

- (void).cxx_destruct;
- (BOOL)parameterStateIsValid:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForState:(id)a0;

@end
