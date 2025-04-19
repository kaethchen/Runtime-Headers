@class NSMutableDictionary;

@interface NSLanguageContext : NSMutableDictionary {
    NSMutableDictionary *_dict;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)availableLanguageContextNames;
+ (id)defaultLanguageContext;
+ (id)languageContextWithName:(id)a0;
+ (id)systemLanguageContext;

@end
