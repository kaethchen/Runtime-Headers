@class NSString, FTSpan, NSArray;

@interface FTMutableBatchTranslationResponse_TranslatedSentence : FTBatchTranslationResponse_TranslatedSentence

@property (copy, nonatomic) FTSpan *source_span;
@property (copy, nonatomic) NSString *engine_input;
@property (copy, nonatomic) FTSpan *target_span;
@property (copy, nonatomic) NSArray *n_best_choices;
@property (copy, nonatomic) NSArray *alternative_descriptions;
@property (nonatomic) BOOL contains_masked_profanity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
