@class NSDictionary, NSString, NSXMLParser;
@protocol PFTTMLParserDelegate;

@interface PFTTMLParser : NSObject <NSXMLParserDelegate>

@property (retain, nonatomic) NSXMLParser *parser;
@property (nonatomic) NSDictionary *currentElementAttributes;
@property (readonly, weak, nonatomic) id<PFTTMLParserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;
- (void)abortParsing;
- (void)parse;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parserDidEndDocument:(id)a0;
- (void)parserDidStartDocument:(id)a0;
- (id)initWithStream:(id)a0 delegate:(id)a1;
- (id)initWithContentsOfURL:(id)a0 delegate:(id)a1;
- (id)initWithData:(id)a0 delegate:(id)a1;
- (BOOL)isDescriptor;
- (id)stringForElementAttribute:(long long)a0;
- (double)timeForElementAttribute:(long long)a0;
- (long long)unitForCurrentSpan;

@end
