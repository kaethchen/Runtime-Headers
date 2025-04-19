@class NSUUID, TSUCustomFormatData, TSUCustomFormat, TSKCurrencyFormat, TSKFormat;

@interface TSKCustomFormatWrapper : TSKFormat {
    TSKFormat *_cachedDefaultNonCustomFormat;
    TSKCurrencyFormat *_cachedNoAccountingStyleFormat;
}

@property (readonly, nonatomic) NSUUID *customFormatKey;
@property (readonly, nonatomic) TSUCustomFormat *customFormat;
@property (readonly, nonatomic) TSUCustomFormatData *defaultCustomFormatData;
@property (readonly, nonatomic) BOOL isMarkedCorrupt;

+ (id)unpopulatedCustomFormatWrapperWithFormatType:(unsigned int)a0 customFormatKey:(id)a1;
+ (id)populatedCustomFormatWrapperFromCFWrapper:(id)a0 customFormat:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asCustomFormatWrapper;
- (id)initWithFormatType:(unsigned int)a0 customFormatKey:(id)a1 customFormat:(id)a2;
- (BOOL)referencesSameCustomFormat:(id)a0;
- (id)stringFromDate:(id)a0 locale:(id)a1;
- (id)p_defaultNumberFormatForLocale:(id)a0;
- (id)currencyCodeForValue:(double)a0;
- (id)customFormatDataForValue:(double)a0;
- (id)defaultNonCustomFormatForLocale:(id)a0;
- (id)nonCustomCurrencyFormatSansAccountingStyleForLocale:(id)a0;
- (id)p_nonCustomCurrencyFormatRemovingAccountingStyle:(BOOL)a0 locale:(id)a1;
- (id)stringFromString:(id)a0 locale:(id)a1;

@end
