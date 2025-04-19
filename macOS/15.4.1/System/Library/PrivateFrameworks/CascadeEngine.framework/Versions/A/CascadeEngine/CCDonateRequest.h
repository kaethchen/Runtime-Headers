@class NSString, CCDonateRequestManager, CCDonateConnection;
@protocol BMAccessAssertion;

@interface CCDonateRequest : NSObject {
    CCDonateConnection *_connection;
    CCDonateRequestManager *_manager;
    unsigned long long _requestQueuedSignpostId;
    unsigned long long _requestHandledSignpostId;
}

@property (readonly, nonatomic) unsigned int requestId;
@property (readonly, nonatomic) unsigned short itemType;
@property (readonly, nonatomic) NSString *encodedDescriptors;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) unsigned long long sourceVersion;
@property (readonly, nonatomic) NSString *sourceValidity;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) id<BMAccessAssertion> accessAssertion;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)timeout;
- (void)handle;
- (void)reject;
- (id)_connectionTypeString;
- (id)initWithConnection:(id)a0 manager:(id)a1 itemType:(unsigned short)a2 encodedDescriptors:(id)a3 personaIdentifier:(id)a4 sourceVersion:(unsigned long long)a5 sourceValidity:(id)a6 options:(unsigned long long)a7 accessAssertion:(id)a8;
- (BOOL)isEqualToDonateRequest:(id)a0;
- (BOOL)isRemoteSync;
- (void)terminateWithType:(long long)a0;

@end
