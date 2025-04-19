@interface SRUIFUtilities : NSObject

+ (id)descriptionForAddViews:(id)a0;
+ (BOOL)string:(id)a0 isSameAsUserUtterance:(id)a1;
+ (id)parsedUtteranceFromText:(id)a0 context:(id)a1 spekableObjectProviding:(id)a2;
+ (id)_normalizeTextString:(id)a0;
+ (id)descriptionForAceView:(id)a0;
+ (id)descriptionForAddDialogs:(id)a0;
+ (id)descriptionForDialog:(id)a0;
+ (id)descriptionForSayIt:(id)a0;
+ (BOOL)shouldRedactSpeakableTextForAceObject:(id)a0;
+ (BOOL)string:(id)a0 equalToString:(id)a1;

@end
