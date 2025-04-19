@class NSArray, NSBundle, NSLocale;

@interface Localize : NSObject

@property (class, readonly, nonatomic) NSLocale *systemLocale;
@property (class, readonly, nonatomic) NSArray *systemLocales;
@property (class, readonly, nonatomic) NSBundle *mainBundle;
@property (class, readonly, nonatomic) NSArray *availableLocaleNames;

+ (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2 localization:(id)a3;
+ (id)localizedStringsForTable:(id)a0 localization:(id)a1;
+ (void)enumerateNumberingSystems:(id /* block */)a0;
+ (id)localizationForLocale:(id)a0;

@end
