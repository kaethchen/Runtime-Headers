@class NSString;

@interface VMUSymbolStoreXMLParserDelegate : NSObject <NSXMLParserDelegate> {
    NSString *_parsedKey;
    NSString *_parsedValue;
}

@property (readonly, nonatomic) NSString *parsedResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
