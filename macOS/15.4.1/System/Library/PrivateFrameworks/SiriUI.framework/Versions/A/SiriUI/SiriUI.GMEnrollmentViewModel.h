@interface SiriUI.GMEnrollmentViewModel : NSObject {
    void /* unknown type, empty encoding */ _prelude;
    void /* unknown type, empty encoding */ _instruction;
    void /* unknown type, empty encoding */ _continuation;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPrelude:(id)a0 instruction:(id)a1 continuation:(id)a2;
- (void)setContinuationLabel:(id)a0;
- (void)setContinuationLabelHidden:(BOOL)a0;
- (void)setIntructionLabel:(id)a0;
- (void)setIntructionLabelHidden:(BOOL)a0;
- (void)setPreludeLabel:(id)a0;
- (void)setPreludeLabelHidden:(BOOL)a0;

@end
