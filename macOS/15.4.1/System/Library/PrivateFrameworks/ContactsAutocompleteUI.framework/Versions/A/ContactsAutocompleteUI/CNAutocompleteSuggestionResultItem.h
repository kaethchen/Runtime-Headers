@class NSString, NSArray, NSMutableSet, CNAutocompleteResultNamer, CNAutocompleteResult;

@interface CNAutocompleteSuggestionResultItem : NSObject

@property (retain, nonatomic) CNAutocompleteResultNamer *namer;
@property (retain, nonatomic) CNAutocompleteResult *result;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSMutableSet *handles;
@property (retain, nonatomic) NSArray *members;
@property (readonly, nonatomic) BOOL isGroup;

+ (id)log;
+ (id)contactStoreForFetchingContacts;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)nameFromContact;
- (BOOL)isSelectedForHandles:(id)a0;
- (void)loadContacts;
- (void)loadName;
- (id)unknownContactForResult:(id)a0;

@end
