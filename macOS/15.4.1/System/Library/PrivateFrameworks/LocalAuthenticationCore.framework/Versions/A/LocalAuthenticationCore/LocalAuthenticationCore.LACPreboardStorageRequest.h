@class NSData, NSUUID;

@interface LocalAuthenticationCore.LACPreboardStorageRequest : NSObject <LACStorageRequest> {
    void /* unknown type, empty encoding */ acl;
    void /* unknown type, empty encoding */ contextID;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ identifier;
@property (nonatomic, readonly) NSData *acl;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ client;
@property (nonatomic, readonly) NSUUID *contextID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ domain;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ key;

- (id)init;
- (void).cxx_destruct;

@end
