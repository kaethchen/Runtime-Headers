@class NSUUID, NSString, NSData, LACClientInfo;

@interface LACUserInterfaceRequest : NSObject <LACRequest, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSUUID *contextID;
@property (retain, nonatomic) NSData *clientAuditTokenData;
@property (retain, nonatomic) LACClientInfo *clientInfo;
@property (nonatomic) int clientProcessId;
@property (nonatomic) BOOL isAuditTokenApplicationIdentity;
@property (nonatomic) BOOL isForSiri;
@property (nonatomic) BOOL isForSoftwareUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unknownInstance;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(long long)a0;
- (id)initWithIdentifier:(long long)a0 evaluationRequest:(id)a1;
- (id)initWithIdentifier:(long long)a0 evaluationRequest:(id)a1 contextID:(id)a2;

@end
