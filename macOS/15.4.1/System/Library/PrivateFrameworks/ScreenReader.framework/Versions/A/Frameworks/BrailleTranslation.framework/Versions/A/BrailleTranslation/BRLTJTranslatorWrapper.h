@protocol BRLTBrailleTranslationDelegateProtocol;

@interface BRLTJTranslatorWrapper : NSObject {
    id<BRLTBrailleTranslationDelegateProtocol> _translationDelegate;
}

@property (nonatomic) unsigned long long outputMode;
@property (nonatomic) unsigned long long inputMode;

- (void).cxx_destruct;
- (id)textForBraille:(id)a0;
- (id)brailleForText:(id)a0;
- (id)arrayFromData:(id)a0;
- (id)initWithTranslationDelegate:(id)a0 outputMode:(unsigned long long)a1 inputMode:(unsigned long long)a2;

@end
