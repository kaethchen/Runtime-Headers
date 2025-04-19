@class NSString;

@interface NWConcrete_nw_bonjour_service_endpoint : NWConcrete_nw_endpoint <OS_nw_bonjour_service_endpoint> {
    char *service_name;
    char *service_type;
    char *service_domain;
    char *service_composite;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyDictionary;
- (unsigned int)type;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;

@end
