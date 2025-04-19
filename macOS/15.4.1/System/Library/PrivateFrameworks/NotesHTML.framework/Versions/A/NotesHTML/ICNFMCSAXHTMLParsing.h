@class NSString, NSMutableString, NSMutableDictionary;

@interface ICNFMCSAXHTMLParsing : NSObject {
    NSMutableString *string;
    NSMutableDictionary *attributes;
    NSString *metaName;
    NSString *metaHttpEquiv;
    NSString *metaContent;
    unsigned long long encoding;
    unsigned int indexingLimit;
    const char *titleStart;
    unsigned int titleLength;
    BOOL inHead;
    BOOL inTitle;
    BOOL inScript;
    BOOL inStyle;
}

- (void).cxx_destruct;
- (id)initWithEncoding:(unsigned long long)a0;

@end
