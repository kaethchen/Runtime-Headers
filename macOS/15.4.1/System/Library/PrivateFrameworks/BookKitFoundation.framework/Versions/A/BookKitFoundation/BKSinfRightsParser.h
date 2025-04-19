@class NSMutableDictionary, NSString, NSData, NSMutableString;

@interface BKSinfRightsParser : NSObject <NSXMLParserDelegate>

@property (retain, nonatomic) NSMutableDictionary *rightsInfo;
@property (retain, nonatomic) NSData *sinfData;
@property (copy, nonatomic) NSString *rightsId;
@property (retain, nonatomic) NSMutableString *foundText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;

@end
