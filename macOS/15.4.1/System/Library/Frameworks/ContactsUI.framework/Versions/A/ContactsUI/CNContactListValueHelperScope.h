@class NSString, CNContact;

@interface CNContactListValueHelperScope : NSObject

@property (readonly) CNContact *contact;
@property (readonly) NSString *key;
@property (readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 key:(id)a1 identifier:(id)a2;

@end
