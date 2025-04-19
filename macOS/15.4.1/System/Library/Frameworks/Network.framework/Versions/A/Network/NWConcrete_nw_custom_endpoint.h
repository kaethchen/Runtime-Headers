@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint <OS_nw_custom_endpoint> {
    NSObject<OS_dispatch_data> *data;
    id /* block */ resolver_block;
    unsigned int type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyDictionary;
- (unsigned int)type;
- (unsigned long long)getHash;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;

@end
