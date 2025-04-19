@class NSUUID, HMDHome;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying>

@property (readonly) NSUUID *homeUUID;
@property unsigned long long userPrivilege;
@property BOOL requiresRemoteAccess;
@property BOOL requiresCameraStreamingAccess;
@property BOOL useProofOfLocality;
@property (readonly, weak) HMDHome *home;
@property (readonly) BOOL validForAnyHomeTheUserIsPartOf;

+ (id)userMessagePolicyUsingProofOfLocalityForHome:(id)a0 userPrivilege:(unsigned long long)a1;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2 requiresCameraStreamingAccess:(BOOL)a3;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2 requiresCameraStreamingAccess:(BOOL)a3 useProofOfLocality:(BOOL)a4;
+ (id)userMessagePolicyWithUserPrivilege:(unsigned long long)a0 remoteAccessRequired:(BOOL)a1;
+ (id)userMessagePolicyWithUserPrivilege:(unsigned long long)a0 remoteAccessRequired:(BOOL)a1 requiresCameraStreamingAccess:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)__initWithHome:(id)a0 homeUUID:(id)a1 userPrivilege:(unsigned long long)a2 remoteAccessRequired:(BOOL)a3 requiresCameraStreamingAccess:(BOOL)a4 useProofOfLocality:(BOOL)a5;

@end
