@interface PFString : NSObject

+ (id)localizedStringWithFormat:(id)a0;
+ (id)localizedStringForInteger:(long long)a0;
+ (id)localizedString:(id)a0;
+ (id)defaultTable;
+ (id)_localizedString:(id)a0 fromTable:(id)a1 logError:(BOOL)a2 formatMissingForDebugging:(BOOL)a3;
+ (id)localizedString:(id)a0 fromTable:(id)a1;
+ (id)localizedStringForDateRangeFrom:(id)a0 to:(id)a1;
+ (id)localizedStringForDateRangeFrom:(id)a0 to:(id)a1 options:(id)a2;
+ (id)localizedStringForNumber:(id)a0 withFormat:(id)a1;
+ (id)localizedStringIfExists:(id)a0;
+ (id)localizedStringIfExists:(id)a0 fromTable:(id)a1;
+ (id)localizedStringWithKey:(id)a0 arguments:(char *)a1;
+ (id)localizedStringWithKey:(id)a0 count:(long long)a1;
+ (id)localizedStringWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1;
+ (id)stringWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1;
+ (id)stringWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 arguments:(char *)a3;

@end
