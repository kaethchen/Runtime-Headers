@interface ShaderGraph.XMLParserDelegate : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ currentElement;
    void /* unknown type, empty encoding */ rootElement;
}

- (id)init;
- (void).cxx_destruct;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;

@end
