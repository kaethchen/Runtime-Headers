@class ABUserDefaults;

@interface ABCNDefaultContactNameOrder : ABCNContactNameOrderImpl {
    ABUserDefaults *_userDefaults;
}

- (void)dealloc;
- (id)init;
- (id)defaultNameOrder;
- (id)initWithUserDefaults:(id)a0;
- (id)fullNameForContact:(id)a0;
- (id)fullNameForContact:(id)a0 emphasisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)nameKeys;
- (long long)nameOrderEnum;
- (id)phoneticFullNameForContact:(id)a0;
- (id)phoneticNameKeys;

@end
