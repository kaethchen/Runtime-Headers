@class NSString;

@interface SiriMessageTypes.ResumeDictationRequestMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ prefixText;
    void /* unknown type, empty encoding */ postfixText;
    void /* unknown type, empty encoding */ selectedText;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
