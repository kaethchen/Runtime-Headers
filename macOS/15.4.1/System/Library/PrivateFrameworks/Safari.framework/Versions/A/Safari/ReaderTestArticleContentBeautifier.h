@class JSValue, JSContext;

@interface ReaderTestArticleContentBeautifier : NSObject {
    JSContext *_context;
    JSValue *_beautifyJSFunction;
}

- (void).cxx_destruct;
- (id)beautifiedHTMLFromHTML:(id)a0;

@end
