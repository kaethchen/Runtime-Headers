@interface CHHorizontalUndersegmentationSplittingStep : CHGroupingPostprocessingStep {
    id /* block */ _additionalMathRecognitionBlock;
}

- (void).cxx_destruct;
- (id)initWithAdditionalMathRecognitionBlock:(id /* block */)a0;
- (id)process:(id)a0 options:(id)a1;

@end
