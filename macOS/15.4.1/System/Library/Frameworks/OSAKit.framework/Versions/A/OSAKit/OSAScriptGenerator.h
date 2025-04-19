@class OSAScriptElement, NSMutableString;

@interface OSAScriptGenerator : NSObject {
    OSAScriptElement *_element;
    NSMutableString *_text;
    BOOL _needsGeneration;
}

+ (id)generatorWithElement:(id)a0;

- (void)dealloc;
- (id)init;
- (id)element;
- (id)initWithElement:(id)a0;
- (void)setElement:(id)a0;
- (id)text;
- (BOOL)generate;
- (BOOL)needsGeneration;
- (void)setNeedsGeneration:(BOOL)a0;

@end
