@class NSString, NSMutableSet, NSData, NSMutableArray;

@interface CoreDAVItem : NSObject <CoreDAVItem>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *nameSpace;
@property (retain, nonatomic) NSMutableSet *attributes;
@property (retain, nonatomic) NSMutableArray *extraChildItems;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) BOOL useCDATA;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyParseRules;
+ (id)parseRuleCache;

- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (BOOL)validate;
- (id)hashString;
- (id)childrenToWrite;
- (id)payloadAsString;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;
- (void)parserFoundAttributes:(id)a0;
- (long long)payloadAsNSInteger;
- (void)setPayloadAsString:(id)a0;
- (void)parserFoundUnrecognizedElement:(id)a0;
- (id)generateXMLString;
- (void)parserFoundPayload:(id)a0;
- (void)parserSuggestsBaseURL:(id)a0;

@end
