@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject {
    struct __CFDateFormatter { } *_initialFormatter;
    NSMutableArray *_entries;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)addSeparator:(unsigned short)a0 format:(id)a1 locale:(id)a2;
- (id)entryForSeparator:(unsigned short)a0;
- (id)formatStringsDictionary;
- (id)initWithInitialPattern:(id)a0 locale:(id)a1;
- (id)initialPattern;
- (id)newDateFromString:(id)a0 forceAllowAMPM:(BOOL)a1 successfulFormatString:(id *)a2 perfect:(BOOL *)a3;

@end
