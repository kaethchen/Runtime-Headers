@class NSMutableArray, NSMutableSet;

@interface OITSUDateFormatCategoryEntry : NSObject {
    unsigned short _separator;
    NSMutableArray *_formatters;
    NSMutableSet *_formatStrings;
}

- (void).cxx_destruct;
- (id)formatStrings;
- (unsigned short)separator;
- (void)addFormat:(id)a0 locale:(id)a1;
- (id)initWithSeparator:(unsigned short)a0;
- (id)newDateFromString:(id)a0 forceAllowAMPM:(BOOL)a1 successfulFormatString:(id *)a2 perfect:(BOOL *)a3;

@end
