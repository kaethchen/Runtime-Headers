@class NSString;

@interface ABCNContactNameFormatter : NSFormatter

@property (copy) NSString *sortOrder;

+ (id)shortNameForContact:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (id)stringForObjectValue:(id)a0;
- (id)nameForContact:(id)a0;
- (id)attributedNameForCompany:(id)a0 defaultAttributes:(id)a1;
- (id)attributedNameForContact:(id)a0;
- (id)attributedNameForContact:(id)a0 withDefaultAttributes:(id)a1;
- (id)emphasisAttributes;
- (id)nameForContact:(id)a0 sortOrder:(id)a1 emphasisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)nameKeysForNameOrder:(long long)a0;
- (id)preferredEmphasisKeysForSortOrder:(id)a0;
- (BOOL)shouldFormatNameAsCompany:(id)a0;

@end
