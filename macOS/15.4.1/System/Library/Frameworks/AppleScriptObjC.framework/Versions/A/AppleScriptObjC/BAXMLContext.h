@class NSString, NSMutableDictionary, BAFunctionSignature, BAMetadataManager;

@interface BAXMLContext : NSObject <NSXMLParserDelegate> {
    BAMetadataManager *_m;
    NSString *_currentClass;
    NSString *_currentMethod;
    NSString *_currentProtocol;
    NSString *_currentFunction;
    unsigned long long _currentArgDepth;
    BAFunctionSignature *_currentSignature;
    NSMutableDictionary *_retvals;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
