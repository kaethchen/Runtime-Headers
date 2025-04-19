@class AMFFeedElement, NSString, NSData, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, AMFFeedParserDelegate;

@interface AMFFeedParser : NSObject <NSXMLParserDelegate, NSCopying> {
    NSObject<OS_dispatch_queue> *_parsingQueue;
    NSData *_data;
    NSURL *_url;
    AMFFeedElement *_root;
    NSMutableArray *_elementStack;
}

@property (weak, nonatomic) id<AMFFeedParserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)parseFeedAsynchronouslyWithData:(id)a0 url:(id)a1 completionHandler:(id /* block */)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parserDidEndDocument:(id)a0;
- (void)parserDidStartDocument:(id)a0;
- (void)_parseAsRSSFeed;
- (void)_beginParsingData:(id)a0;
- (void)_parseAsAtomFeed;
- (void)_parsingFailedWithError:(id)a0;
- (void)_parsingFinishedWithMetada:(id)a0 entries:(id)a1;
- (id)initWithData:(id)a0 url:(id)a1;
- (void)startParsing;

@end
