@interface IAStringDetails : NSObject

@property (nonatomic) unsigned long long characters;
@property (nonatomic) unsigned long long emojiCharacters;
@property (nonatomic) unsigned long long punctuationCharacters;

+ (id)sharedPunctuationCharacterSet;
+ (unsigned long long)emojiCountForText:(id)a0;
+ (id)getDetailsForString:(id)a0;
+ (unsigned long long)normalizedTextLength:(id)a0;
+ (unsigned long long)punctuationCountForText:(id)a0;

@end
