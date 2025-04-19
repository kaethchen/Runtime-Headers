@class NSString, NSUUID, NWEndpoint, NSObject;
@protocol OS_nw_endpoint;

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying> {
    long long _generateIdentifierOnce;
    unsigned long long _socketID;
    NSUUID *_socketUUID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSObject<OS_nw_endpoint> *localFlowEndpoint;
@property (copy) NSObject<OS_nw_endpoint> *remoteFlowEndpoint;
@property (copy) NSString *remoteHostname;
@property int socketFamily;
@property int socketType;
@property int socketProtocol;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSUUID *euuid;
@property (copy, nonatomic) NSUUID *ruuid;
@property (readonly) NWEndpoint *remoteEndpoint;
@property (readonly) NWEndpoint *localEndpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (BOOL)createDataCompleteReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createDataReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createNewFlowReply:(id)a0 controlSocket:(int)a1 verdict:(id)a2 context:(id)a3;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)identifierString;

@end
