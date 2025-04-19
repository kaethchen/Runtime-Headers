@class NSMutableCharacterSet;

@interface PlainFormatter : NSFormatter {
    NSMutableCharacterSet *_characterSet;
    int _maxChars;
    BOOL _allowDigits;
    BOOL _allowLetters;
    BOOL _allowDashesAndUnderscores;
}

+ (id)formatterForPassKey;
+ (id)formatterForPasscode;
+ (id)formatterForSerialPortName;

- (id)init;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (void)buildCharacterSet;
- (BOOL)isGoodString:(id)a0 intoString:(id *)a1;
- (void)setAllowLetters:(BOOL)a0 allowDigits:(BOOL)a1 allowUnderscoresAndDashes:(BOOL)a2;
- (void)setMaxCharactersAllowed:(int)a0;

@end
