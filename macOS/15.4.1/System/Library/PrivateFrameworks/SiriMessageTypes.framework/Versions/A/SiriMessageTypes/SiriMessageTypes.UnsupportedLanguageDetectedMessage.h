@class NSString;

@interface SiriMessageTypes.UnsupportedLanguageDetectedMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ languageDetected;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
