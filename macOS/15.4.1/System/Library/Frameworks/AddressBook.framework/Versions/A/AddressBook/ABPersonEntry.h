@class NSString, SGRecordId, NSArray, NSDate, NSURL;

@interface ABPersonEntry : ABTableEntry {
    NSString *_preferredIdentifier;
}

@property (readonly, copy) NSString *linkIdentifier;
@property (readonly, copy) NSString *recordIdentifier;
@property (readonly, copy) SGRecordId *suggestionIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *firstName;
@property (readonly, copy) NSString *lastName;
@property (readonly, copy) NSString *organization;
@property (readonly, copy) NSString *searchString;
@property (readonly, copy) NSString *sortingFirstName;
@property (readonly, copy) NSString *sortingLastName;
@property (readonly, copy) NSDate *creationDate;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } nameEmphasisRange;
@property (readonly) BOOL isPerson;
@property (readonly) BOOL isCompany;
@property (readonly) BOOL isGroup;
@property (readonly) BOOL isMe;
@property (readonly) BOOL isRestricted;
@property (readonly) BOOL isSuggested;
@property (readonly, copy) NSString *sectionKey;
@property (readonly) unsigned long long iconType;
@property (readonly) unsigned long long nameOrder;
@property (readonly) unsigned long long resultType;
@property (readonly, copy) NSString *preferredIdentifier;
@property (readonly, copy) NSArray *pickerPropertyObjects;
@property (readonly, copy) NSArray *linkedRecordIdentifiers;
@property (readonly, copy) NSArray *backingRecordIdentifiers;
@property (readonly, copy) NSURL *metadataFileUrl;

+ (BOOL)isContactRestricted:(id)a0;
+ (id)meEntryForPersonEntry:(id)a0;
+ (id)personEntryForLinkedContacts:(id)a0;
+ (id)personEntryForPerson:(id)a0;
+ (id)personEntryForRecord:(id)a0;
+ (id)sortingCompanyNameFromRecord:(id)a0;
+ (id)sortingStringForString:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)canSelect;
- (BOOL)canDrag;
- (id)makeSortingFirstNameFromRecord:(id)a0;
- (id)initWithPersonEntry:(id)a0 sectionKey:(id)a1;
- (BOOL)canSwipeToDelete;
- (id)identifierForRecordOwningValueIdentifier:(id)a0;
- (id)initWithLinkedContacts:(id)a0 withFactory:(id)a1;
- (id)initWithPersonEntry:(id)a0;
- (id)initWithPreferredRecord:(id)a0 allRecords:(id)a1 withFactory:(id)a2;
- (id)initWithRecord:(id)a0 suggestionIdentifier:(id)a1 isMe:(BOOL)a2 withFactory:(id)a3;
- (id)initWithRecord:(id)a0 withFactory:(id)a1;
- (id)makeSortingFirstNameFromEntry:(id)a0;
- (id)makeSortingLastNameFromEntry:(id)a0;
- (id)makeSortingLastNameFromRecord:(id)a0;
- (long long)subrowIndexForIdentifier:(id)a0;

@end
