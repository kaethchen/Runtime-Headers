@class NSBundle, NSDictionary, NSLocale, U2Head;

@interface U2HeadWrapper : NSObject {
    NSLocale *_locale;
    U2Head *_u2Head;
}

@property (class, nonatomic) BOOL useSpotlightResources;
@property (class, retain, nonatomic) NSBundle *U2HeadBundle;

@property (readonly, nonatomic) NSDictionary *metadata;

+ (id)log;
+ (id)signpostLog;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)assetURL;
- (void)loadWithCompletionHandler:(id /* block */)a0;
- (id)argmaxWithIndex:(id)a0;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })getTokenScoresfromScoreTensor:(id)a0 intentIndex:(int)a1 tokens:(id)a2 subtokenLenForTokens:(id)a3 subtokens:(id)a4 scoreFromSubtokenScores:(id /* block */)a5;
- (id)getU2PredictionsForEmbedding:(id)a0 queryString:(id)a1 spans:(id)a2 tokens:(id)a3 tokenRanges:(id)a4 subtokenLenForTokens:(id)a5 subtokens:(id)a6 intentHint:(id)a7 error:(id *)a8;
- (id)mapLogitsToLabels:(id)a0 queryString:(id)a1 intentHint:(id)a2 tokens:(id)a3 subtokenLenForTokens:(id)a4 subtokens:(id)a5;

@end
