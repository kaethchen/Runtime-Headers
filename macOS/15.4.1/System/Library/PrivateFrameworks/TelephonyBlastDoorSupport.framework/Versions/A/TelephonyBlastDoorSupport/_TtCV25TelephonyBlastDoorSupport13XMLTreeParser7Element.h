@interface _TtCV25TelephonyBlastDoorSupport13XMLTreeParser7Element : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ children;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ errorContext;
}

- (id)init;
- (void).cxx_destruct;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;

@end
