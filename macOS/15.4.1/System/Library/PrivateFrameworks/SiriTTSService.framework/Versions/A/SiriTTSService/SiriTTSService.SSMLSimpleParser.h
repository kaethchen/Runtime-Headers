@interface SiriTTSService.SSMLSimpleParser : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ phonemes;
}

- (id)init;
- (void).cxx_destruct;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parserDidStartDocument:(id)a0;

@end
