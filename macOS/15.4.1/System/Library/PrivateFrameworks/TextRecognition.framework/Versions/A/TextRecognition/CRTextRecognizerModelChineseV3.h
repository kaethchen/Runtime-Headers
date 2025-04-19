@interface CRTextRecognizerModelChineseV3 : CRTextSequenceRecognizerTopKModelEspresso

+ (id)defaultURLOfModelInThisBundle;

- (id)init;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)supportCharacterBoxes;

@end
