@class NSString;

@interface _EARFullPayloadCorrector : NSObject {
    NSString *_language;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (id)getTextCompositionAssistant;
- (void)rescorePackage:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)rewritePackage:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)rewritePostITNOutput:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;

@end
