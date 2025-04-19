@class NSString;

@interface NWConcrete_nw_ids_info : NSObject <OS_nw_ids_info> {
    char *session_id;
    char *pseudonym;
    char *push_token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
