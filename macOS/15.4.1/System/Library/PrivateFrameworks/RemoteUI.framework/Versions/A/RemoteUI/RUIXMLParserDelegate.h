@class RUIXMLElement, NSArray;

@interface RUIXMLParserDelegate : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ _xmlElement;
    void /* unknown type, empty encoding */ root;
    void /* unknown type, empty encoding */ _stack;
}

@property (nonatomic, readonly) RUIXMLElement *xmlElement;
@property (nonatomic, readonly) NSArray *stack;

- (id)init;
- (void).cxx_destruct;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)initWithRoot:(id)a0;

@end
