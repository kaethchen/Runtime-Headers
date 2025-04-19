@class NSString, NSArray, ABAddressBook;

@interface ABFindsPreferredLinkedPerson : NSObject {
    ABAddressBook *_addressBook;
    NSString *_linkId;
    NSArray *_sortDescriptors;
}

+ (id)preferredNameFinderWithAddressBook:(id)a0 linkId:(id)a1;
+ (id)preferredPhotoFinderWithAddressBook:(id)a0 linkId:(id)a1;

- (void)dealloc;
- (id)getLinkedPeople;
- (id)findPerson;
- (id)initWithAddressBook:(id)a0 linkId:(id)a1 tieBreakers:(id)a2;
- (id)sortPeople:(id)a0;

@end
