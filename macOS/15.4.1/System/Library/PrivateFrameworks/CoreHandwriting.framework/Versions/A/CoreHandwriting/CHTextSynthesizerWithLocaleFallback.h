@class NSArray, NSString;
@protocol CHSynthesizingText;

@interface CHTextSynthesizerWithLocaleFallback : NSObject <CHSynthesizingTextWithLocaleFallback> {
    id<CHSynthesizingText> _synthesizer;
}

@property (readonly, copy, nonatomic) NSArray *locales;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLocales:(id)a0 baseSynthesizer:(id)a1;
- (id)refineDrawing:(id)a0 transcription:(id)a1 options:(id)a2 shouldCancel:(id /* block */)a3 error:(id *)a4;
- (id)replaceDrawing:(id)a0 originalTranscription:(id)a1 replacementTranscription:(id)a2 options:(id)a3 shouldCancel:(id /* block */)a4 error:(id *)a5;
- (id)supportedCharacterIndexesForString:(id)a0 options:(id)a1;
- (id)synthesizeDrawingForString:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;
- (id)synthesizeExpressionEvaluationResultWithBlock:(id /* block */)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;

@end
