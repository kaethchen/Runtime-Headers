@class AMSUIMessageMarkdownConfiguration, NSString, NSDictionary, AMSUIMarkdownParser, NSMutableArray, NSMutableAttributedString;

@interface AMSUIMessageMarkdownGenerator : NSObject <AMSUIMarkdownParserDelegate>

@property (retain) NSMutableAttributedString *accumulator;
@property (retain) AMSUIMarkdownParser *parser;
@property (retain) NSMutableArray *attributeStack;
@property BOOL didParseEverything;
@property (retain) NSString *symbol;
@property (retain) NSDictionary *symbolAttributes;
@property (retain) AMSUIMessageMarkdownConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parserDidEndDocument:(id)a0;
- (void)parserDidStartDocument:(id)a0;
- (id)generate;
- (id)fontWithTraits:(unsigned int)a0;
- (void)pushAttributes:(id)a0;
- (void)appendStyledString:(id)a0;
- (id)currentFont;
- (id)currentFontAddingFontAttributes:(id)a0;
- (id)initWithMarkdownString:(id)a0 configuration:(id)a1;
- (void)parser:(id)a0 didEndElement:(unsigned long long)a1;
- (void)parser:(id)a0 didEndListOfStyle:(unsigned long long)a1;
- (void)parser:(id)a0 didFindArtworkWithIdentifier:(id)a1;
- (void)parser:(id)a0 didFindCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(unsigned long long)a1 attributes:(id)a2;
- (void)parser:(id)a0 didStartListOfStyle:(unsigned long long)a1;
- (void)parserDidEndListElement:(id)a0;
- (void)parserDidFindNewline:(id)a0;
- (void)parserDidStartListElement:(id)a0;
- (void)popAttributes;
- (id)reconcileElementAttributes:(id)a0 withFont:(id)a1;

@end
