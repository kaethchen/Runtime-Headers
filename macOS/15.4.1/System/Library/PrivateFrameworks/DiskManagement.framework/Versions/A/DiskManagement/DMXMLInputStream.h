@class NSMutableString;

@interface DMXMLInputStream : NSObject {
    NSMutableString *_toolTextOutputAccumulator;
    NSMutableString *_xmlDocAccumulator;
}

- (void)dealloc;
- (id)init;
- (int)chunksToLines:(id)a0 lineHandler:(id /* block */)a1;
- (int)controlStringToFilledString:(id)a0 parameters:(id)a1 numberFormat:(id)a2 outString:(id *)a3;
- (int)linesToDictionaries:(id)a0 dictionaryHandler:(id /* block */)a1;
- (int)renderParameter:(id)a0 numberFormat:(id)a1 outString:(id *)a2;

@end
