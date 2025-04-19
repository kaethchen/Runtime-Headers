@class NSMutableArray, NSString, NSUUID, NSData, NSURL, NEFilterAbsoluteVerdict, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NEFilterFlow : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying> {
    BOOL _isRemediationFlow;
    BOOL _isPaused;
    BOOL _reportAtEnd;
    BOOL _sourceAppIdentifierFromApp;
    NEFilterAbsoluteVerdict *_currentVerdict;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_flowUUID;
    NSMutableArray *_savedMessageHandlerQueue;
    NSObject<OS_xpc_object> *_connection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *sourceAppIdentifier;
@property (copy) NSString *sourceAppVersion;
@property (copy) NSData *sourceAppUniqueIdentifier;
@property (copy) NSURL *URL;
@property long long direction;
@property (retain) NSData *sourceAppAuditToken;
@property (retain) NSData *sourceProcessAuditToken;
@property unsigned long long inBytes;
@property unsigned long long outBytes;
@property BOOL inputComplete;
@property BOOL outputComplete;
@property (retain) NSData *crypto_signature;
@property (readonly, nonatomic) NSString *identifierString;
@property int pid;
@property int epid;
@property int rpid;
@property (readonly) NSUUID *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)createDataCompleteReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createDataReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createNewFlowReply:(id)a0 controlSocket:(int)a1 verdict:(id)a2 context:(id)a3;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithURL:(id)a0 sourceAppIdentifier:(id)a1;

@end
