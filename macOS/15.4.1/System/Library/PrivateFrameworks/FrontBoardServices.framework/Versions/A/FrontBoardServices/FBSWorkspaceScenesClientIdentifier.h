@class NSString, BSServiceConnectionEndpoint, BSServiceConnection;
@protocol BSServiceConnectionHost;

@interface FBSWorkspaceScenesClientIdentifier : NSObject <NSCopying> {
    BSServiceConnectionEndpoint *_hostEndpoint;
    BSServiceConnection<BSServiceConnectionHost> *_peer;
    NSString *_description;
    int _host;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
