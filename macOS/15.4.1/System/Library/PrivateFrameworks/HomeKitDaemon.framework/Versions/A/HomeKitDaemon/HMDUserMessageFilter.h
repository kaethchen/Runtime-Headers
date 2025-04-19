@class NSString;

@interface HMDUserMessageFilter : HMFMessageFilter <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (long long)filterMessage:(id)a0 withPolicies:(id)a1 dispatcher:(id)a2 error:(id *)a3;
+ (BOOL)areWeGoingToRejectMessage:(id)a0 basedOnRemoteAccessPolicy:(id)a1 forUser:(id)a2;
+ (id)homeForMessage:(id)a0 userPolicy:(id)a1 dispatcher:(id)a2;


@end
