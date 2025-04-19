@class QCCompositionParameterView;

@interface QCPatchParameterView : QCPatchParametersView {
    QCCompositionParameterView *_compositionParameterView;
}

- (BOOL)isInputPortVisible:(id)a0;
- (void)localizePortInfo:(id)a0;
- (void)setCompositionParameterView:(id)a0;

@end
