@class NSString, _NSHTTPAlternativeServicesStorage, NSObject;
@protocol OS_nw_storage;

@interface NWConcrete_nw_http_alt_svc_storage : NSObject <OS_nw_http_alt_svc_storage> {
    NSObject<OS_nw_storage> *storage;
    _NSHTTPAlternativeServicesStorage *oldStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
