@class NSString, NSMutableString, NSXMLElement, NSObject, NSMutableArray;
@protocol NSXMLParserDelegate;

@interface IFNSXMLSacsToDom : NSObject <NSXMLParserDelegate> {
    NSObject<NSXMLParserDelegate> *_parentParser;
    NSXMLElement *_root;
    NSMutableArray *_elementStack;
    NSMutableString *_stringAccumulator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)rootElement;
- (id)initForParser:(id)a0 withRootName:(id)a1 andAttributes:(id)a2;

@end
