@class NSUUID, NSString, NSObject;
@protocol OS_xpc_object;

@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_endpoint;
    NSUUID *_oneshot;
    NSString *_eDesc;
    int _targetPID;
    unsigned int _invalidationGeneration;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
