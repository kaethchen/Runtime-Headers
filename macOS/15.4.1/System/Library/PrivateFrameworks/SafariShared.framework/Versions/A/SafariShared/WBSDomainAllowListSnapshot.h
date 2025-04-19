@class NSString, NSSet;

@interface WBSDomainAllowListSnapshot : NSObject <WBSRemotelyUpdatableDataSnapshot> {
    NSSet *_allowedDomains;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)snapshotData;
- (id)initWithDomains:(id)a0;
- (id)initWithSnapshotData:(id)a0 error:(id *)a1;
- (BOOL)isDomainAllowed:(id)a0;

@end
