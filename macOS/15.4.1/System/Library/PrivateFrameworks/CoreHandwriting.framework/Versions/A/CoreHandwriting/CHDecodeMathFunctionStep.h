@class NSDictionary, NSSet;

@interface CHDecodeMathFunctionStep : CHMathPostprocessingStep {
    NSDictionary *_mathFunctionNameMapping;
    NSDictionary *_stemFunctionMappings;
    NSSet *_decoratedFunctions;
}

+ (id)definedMathFunctionNameMapping;
+ (id)definedMathFunctionNameSet;
+ (BOOL)isFunctionInTranscriptionPathWrappedByAnyStringFromArray:(id)a0 functionName:(id)a1 pathTranscription:(id)a2 functionStartLocation:(long long)a3;

- (id)init;
- (void).cxx_destruct;
- (id)_sortedFunctionNames:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
