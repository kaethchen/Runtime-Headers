@class NSString, NSMutableArray, NSMenuItem;

@interface DDPhoneNumber : NSObject {
    NSMutableArray *_phoneNumbers;
    NSMutableArray *_displayNumbers;
    NSMutableArray *_emailAddresses;
    NSMutableArray *_facetimePhoneNumbers;
    NSMutableArray *_facetimeEmailAddresses;
    NSMutableArray *_unkownPhoneNumbers;
    NSMutableArray *_unkownEmailAddresses;
    unsigned long long _reachabilityTestsPending;
    BOOL _reachabilityTestsLaunched;
    unsigned long long _reachabilityTestsRetries;
    NSString *_IDSUUID;
    NSMenuItem *_menuItem;
    SEL _actionSelector;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)displayNumber;
- (id)messageURL;
- (void)appendDataFromResult:(struct __DDResult { } *)a0;
- (void)appendPhoneNumber:(id)a0;
- (BOOL)couldBeValidForDial;
- (BOOL)couldBeValidForFacetime;
- (BOOL)couldBeValidForMessages;
- (id)dialNumber;
- (id)dialURLUsingPrompt:(BOOL)a0;
- (id)dialURLWithScheme:(id)a0;
- (id)displayNumbers;
- (id)facetimeNumber;
- (BOOL)facetimeReachabilityIsValid;
- (id)facetimeURLAudioOnly:(BOOL)a0;
- (void)fecthedFacetimeStatus;
- (id)initWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
- (BOOL)isFacetimeReachable;
- (void)setFacetimeMenuItem:(id)a0;
- (void)testFacetimeReachability;
- (void)testFacetimeReachabilityForPhones:(id)a0 emails:(id)a1;
- (void)testReachability:(id)a0 isEmail:(BOOL)a1;

@end
