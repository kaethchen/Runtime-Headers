@interface ABCNContactNameOrderImpl : NSObject

+ (BOOL)isChineseJapaneseKoreanContact:(id)a0;
+ (id)defaultNewContactOrder;
+ (id)defaultOrder;
+ (id)firstNameFirstOrder;
+ (BOOL)isEmptyNameContact:(id)a0;
+ (id)lastNameFirstOrder;
+ (id)nameOrderForContact:(id)a0;

- (id)fullNameForContact:(id)a0;
- (id)fullNameForContact:(id)a0 emphasisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)nameKeys;
- (long long)nameOrderEnum;
- (id)phoneticFullNameForContact:(id)a0;
- (id)phoneticNameKeys;

@end
