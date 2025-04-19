@class ABUserDefaults, CNContact;

@interface _CNUIDefaultContactNameOrder : CNUIContactNameOrder

@property (retain, nonatomic) ABUserDefaults *userDefaults;
@property (retain, nonatomic) CNContact *contact;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0;
- (id)defaultNameOrder;
- (id)nameKeys;
- (id)phoneticNameKeys;
- (id)initWithContact:(id)a0 userDefaults:(id)a1;

@end
