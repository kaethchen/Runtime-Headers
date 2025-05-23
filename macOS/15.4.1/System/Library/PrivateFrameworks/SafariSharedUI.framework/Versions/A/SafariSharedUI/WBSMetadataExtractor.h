@class WKWebProcessPlugInScriptWorld, WKWebProcessPlugInFrame, JSContext;

@interface WBSMetadataExtractor : NSObject {
    WKWebProcessPlugInScriptWorld *_webProcessPlugInScriptWorld;
    JSContext *_context;
}

@property (readonly, nonatomic) WKWebProcessPlugInFrame *webProcessPlugInFrame;
@property (readonly, nonatomic) JSContext *context;

+ (id)metadataExtractorScriptSource;

- (void)dealloc;
- (void).cxx_destruct;
- (id)makeContext;
- (id)appleTouchIconURLs;
- (id)faviconURLs;
- (void)getTemplateIconURL:(id *)a0 andColor:(id *)a1;
- (id)_colorFromColorComponents:(id)a0;
- (id)_resultForInvokingFunctionWithName:(id)a0;
- (id)firstElementForSelector:(id)a0;
- (id)initWithWebProcessPlugInFrame:(id)a0;
- (id)initWithWebProcessPlugInFrame:(id)a0 useNormalWorld:(BOOL)a1;

@end
