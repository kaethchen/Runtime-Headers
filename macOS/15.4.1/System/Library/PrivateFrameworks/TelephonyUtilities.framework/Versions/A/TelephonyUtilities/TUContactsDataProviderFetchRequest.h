@class NSString, NSArray;

@interface TUContactsDataProviderFetchRequest : NSObject

@property (readonly, nonatomic, getter=isEmergency) BOOL emergency;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic, getter=isConversation) BOOL conversation;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic, getter=isIncoming) BOOL incoming;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *auxiliaryKeysToFetch;
@property (copy, nonatomic) NSString *phoneNumberPrefixHint;
@property (nonatomic) BOOL useNetworkCountryCode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (id)initWithHandles:(id)a0;
- (id)initWithHandles:(id)a0 isConversation:(BOOL)a1;
- (id)initWithCall:(id)a0;
- (void)removePsuedHandles;

@end
