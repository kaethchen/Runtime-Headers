@class CNPostalAddress;

@interface ABAddressFieldValuePopulator : NSObject

@property (readonly) CNPostalAddress *postalAddress;

- (void).cxx_destruct;
- (id)initWithPostalAddress:(id)a0;
- (id)cardViewTagToValueKeypathMap;
- (void)populateAddressFields:(id)a0;
- (id)valueForComponentKeypath:(id)a0;

@end
