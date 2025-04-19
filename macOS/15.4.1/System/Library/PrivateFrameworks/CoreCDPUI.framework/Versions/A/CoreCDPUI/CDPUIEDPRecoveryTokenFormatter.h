@class CDPUIEDPRecoveryTokenEntryViewModel;

@interface CDPUIEDPRecoveryTokenFormatter : NSFormatter {
    CDPUIEDPRecoveryTokenEntryViewModel *_entryViewModel;
}

- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (id)initWithViewModel:(id)a0;

@end
