@class NSString, NSDictionary;

@interface WBSUserAgentQuirksSnapshot : NSObject <WBSRemotelyUpdatableDataSnapshot> {
    NSDictionary *_domainsToQuirkTypes;
    NSDictionary *_userAgentQuirks;
    NSDictionary *_sitesRequiringUserAgentQuirks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)snapshotData;
- (id)initWithSnapshotData:(id)a0 error:(id *)a1;
- (id)quirkTypeForURLString:(id)a0 withDefaultUserAgent:(id)a1;

@end
