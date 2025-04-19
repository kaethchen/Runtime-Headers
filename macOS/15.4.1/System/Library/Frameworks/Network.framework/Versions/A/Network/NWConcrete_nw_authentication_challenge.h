@class NSString, NWConcrete_nw_authentication_credential, NSObject;
@protocol OS_nw_array;

@interface NWConcrete_nw_authentication_challenge : NSObject <OS_nw_authentication_challenge> {
    NWConcrete_nw_authentication_credential *proposed_credential;
    void *http_message;
    NSObject<OS_nw_array> *protection_space_array;
    unsigned long long preferred_space_index;
    unsigned int attempt_count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
