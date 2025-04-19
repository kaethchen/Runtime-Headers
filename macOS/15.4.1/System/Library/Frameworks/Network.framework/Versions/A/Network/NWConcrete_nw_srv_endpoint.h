@class NSString;

@interface NWConcrete_nw_srv_endpoint : NWConcrete_nw_endpoint <OS_nw_srv_endpoint> {
    char *name;
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
