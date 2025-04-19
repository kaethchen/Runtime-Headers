@class NSString;

@interface SiriMessageTypes.NLParseResponse : NSObject {
    void /* unknown type, empty encoding */ userParses;
    void /* unknown type, empty encoding */ responseStatusCode;
    void /* unknown type, empty encoding */ fallbackParse;
    void /* unknown type, empty encoding */ serverFallbackReason;
    void /* unknown type, empty encoding */ languageVariantResult;
    void /* unknown type, empty encoding */ responseVariantResult;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
