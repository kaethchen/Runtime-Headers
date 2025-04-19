@class NSString;

@interface NWConcrete_nw_application_service_endpoint : NWConcrete_nw_endpoint <OS_nw_application_service_endpoint> {
    char *alias;
    char *application_service;
    unsigned char service_identifier[16];
    char *device_name;
    char *device_model;
    unsigned int device_color;
    int route;
    char *contact_id;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyDictionary;
- (unsigned int)type;
- (unsigned long long)getHash;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;

@end
