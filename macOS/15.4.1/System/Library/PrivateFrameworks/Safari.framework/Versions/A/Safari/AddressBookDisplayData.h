@class NSArray;

@interface AddressBookDisplayData : AutoFillDisplayData

@property (readonly, copy, nonatomic) NSArray *addressBookMatches;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 values:(id)a1 identifier:(id)a2 property:(id)a3 addressBookMatches:(id)a4;

@end
