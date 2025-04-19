@class CNContactStore, FAFamilyMember, ABAddressBook;

@interface CNContactPickerFamilyMemberScope : NSObject

@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) CNContactStore *familyMemberScopedContactStore;
@property (readonly, nonatomic) ABAddressBook *familyMemberScopedAddressBook;

+ (id)addressBookForFamilyMember:(id)a0;

- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0;

@end
