@interface CRTextRecognizerModelLatinCyrillicV3 : CRTextSequenceRecognizerModelEspresso

+ (id)defaultURLOfModelInThisBundle;

- (id)init;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (struct TextBoxesOffsets { double x0; double x1; double x2; double x3; })wordBoxesOffsets;

@end
