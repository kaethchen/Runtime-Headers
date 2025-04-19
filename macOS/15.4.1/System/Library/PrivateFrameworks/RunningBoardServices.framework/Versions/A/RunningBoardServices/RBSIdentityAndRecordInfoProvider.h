@class NSString;

@interface RBSIdentityAndRecordInfoProvider : NSObject <RBSWrappedLSInfoProvider> {
    NSString *_personaString;
    NSString *_bundleID;
    NSString *_persistentJobLabel;
    int _platform;
    unsigned long long _bundleInode;
    unsigned long long _execInode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_providerWithIdentity:(id)a0 record:(id)a1;

- (void).cxx_destruct;
- (id)_initWithIdentity:(id)a0 record:(id)a1;
- (id)fetchWrappedInfoWithError:(out id *)a0;

@end
