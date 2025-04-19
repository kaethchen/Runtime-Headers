@class NSString;
@protocol BRLTBrailleTranslationDelegateProtocol;

@interface BRLTTranslator : NSObject {
    id<BRLTBrailleTranslationDelegateProtocol> _translationDelegate;
    NSString *_tableIdentifier;
}

- (void).cxx_destruct;
- (id)_backTranslate:(id)a0;
- (id)_translate:(id)a0 isTechnical:(BOOL)a1 textFormattingRanges:(id)a2;
- (id)arrayFromData:(id)a0;
- (id)initWithDelegate:(id)a0 tableIdentifier:(id)a1;
- (BOOL)isEqualTable:(id)a0;

@end
