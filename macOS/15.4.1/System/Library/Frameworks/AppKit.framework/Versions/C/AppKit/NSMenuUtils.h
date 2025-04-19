@interface NSMenuUtils : NSObject

+ (unsigned int)_systemUIModeFromProcessAttributes:(void *)a0;
+ (unsigned int)_systemUIOptionsFromProcessAttributes:(void *)a0;
+ (unsigned int)activeDisplay;
+ (unsigned long long)activeSpaceOnDisplay:(unsigned int *)a0;
+ (unsigned long long)currentSpaceForDisplay:(unsigned int)a0;
+ (unsigned int)displayForSpace:(unsigned long long)a0;
+ (BOOL)isCurrentProcessMenuBarOwner;
+ (BOOL)isDisplayFullScreen:(unsigned int)a0;
+ (id)preferredLanguageString:(id)a0 inTable:(id)a1;

@end
