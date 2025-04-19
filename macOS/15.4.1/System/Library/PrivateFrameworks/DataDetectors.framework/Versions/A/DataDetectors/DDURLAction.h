@class NSString;

@interface DDURLAction : DDMacAction {
    NSString *_replacementForSpaces;
    NSString *_url;
}

+ (id)urlFromTemplateString:(id)a0 result:(struct __DDResult { } *)a1 replacementForSpaces:(id)a2;

- (void).cxx_destruct;
- (id)formattedURLForResult:(struct __DDResult { } *)a0;
- (id)initWithDict:(id)a0 bundle:(id)a1;
- (BOOL)runForResult:(struct __DDResult { } *)a0 context:(id)a1;
- (BOOL)runForURL:(id)a0 context:(id)a1;

@end
