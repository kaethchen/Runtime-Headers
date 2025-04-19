@class NSString, CNContactStore, CNContact;

@interface CNContactListHelperScope : NSObject

@property (readonly) CNContact *contact;
@property (readonly) NSString *contactIdentifier;
@property (readonly) CNContactStore *contactStore;
@property (readonly) long long row;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 contactStore:(id)a1 row:(long long)a2;
- (id)initWithContactIdentifier:(id)a0 contactStore:(id)a1 row:(long long)a2;

@end
