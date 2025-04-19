@class SOAPDocument, NSString, NSError, NSMutableArray, NSXMLParser;
@protocol SOAPParserDelegate;

@interface SOAPParser : NSObject <NSXMLParserDelegate> {
    NSMutableArray *_stack;
}

@property (retain, nonatomic) NSXMLParser *parser;
@property (weak, nonatomic) id<SOAPParserDelegate> delegate;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) SOAPDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)parseData:(id)a0;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parserDidStartDocument:(id)a0;

@end
