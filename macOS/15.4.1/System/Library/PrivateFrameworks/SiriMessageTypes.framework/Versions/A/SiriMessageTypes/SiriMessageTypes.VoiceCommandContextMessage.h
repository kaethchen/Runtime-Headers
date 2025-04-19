@interface SiriMessageTypes.VoiceCommandContextMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ prefixText;
    void /* unknown type, empty encoding */ postfixText;
    void /* unknown type, empty encoding */ selectedText;
    void /* unknown type, empty encoding */ disambiguationActive;
    void /* unknown type, empty encoding */ cursorInVisibleText;
    void /* unknown type, empty encoding */ favorCommandSuppression;
    void /* unknown type, empty encoding */ abortCommandSuppression;
    void /* unknown type, empty encoding */ undoEvent;
}

- (void).cxx_destruct;

@end
