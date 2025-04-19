@class SEMSpanMatcher;

@interface KVSpanMatcher : NSObject {
    SEMSpanMatcher *_spanMatcher;
}

+ (id)indexMatcher;
+ (id)itemMatcher:(id)a0 locale:(id)a1;
+ (id)itemMatcher:(id)a0 tokenizer:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)_convertResults:(id)a0;
- (id)indexLocaleWithUserId:(id)a0 error:(id *)a1;
- (id)matchSpans:(id)a0 userId:(id)a1 error:(id *)a2;
- (id)matchSpans:(id)a0 error:(id *)a1;
- (BOOL)setItems:(id)a0 error:(id *)a1;
- (id)indexLocaleWithError:(id *)a0;
- (id)initWithSpanMatcher:(id)a0;

@end
