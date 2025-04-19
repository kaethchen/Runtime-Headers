@class CNContactStore, MUILocalizationListFormatter, EFLazyCache;
@protocol EMUserProfileProvider;

@interface MUIAddressListFormatter : NSFormatter

@property (readonly, nonatomic) MUILocalizationListFormatter *listFormatter;
@property (retain, nonatomic) EFLazyCache *commentCache;
@property (retain, nonatomic) EFLazyCache *addressCache;
@property (retain, nonatomic) EFLazyCache *attributedAddressCache;
@property (readonly, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (void)_invalidateCache;
- (id)stringForObjectValue:(id)a0;
- (void)_commonInit;
- (id)_addressCommentForAddressList:(id)a0 preferFullDisplayName:(BOOL)a1;
- (id)_attributedAddressCommentForAddressList:(id)a0 preferFullDisplayName:(BOOL)a1;
- (void)_handleContactsChanged:(id)a0;
- (id)attributedStringFromEmailAddressList:(id)a0;
- (id)initWithUserProfileProvider:(id)a0 contactStore:(id)a1;
- (id)stringFromAddressAddressList:(id)a0;
- (id)stringFromAddressAddressList:(id)a0 preferFullDisplayName:(BOOL)a1;
- (id)stringFromEmailAddressList:(id)a0 preferFullDisplayName:(BOOL)a1;

@end
