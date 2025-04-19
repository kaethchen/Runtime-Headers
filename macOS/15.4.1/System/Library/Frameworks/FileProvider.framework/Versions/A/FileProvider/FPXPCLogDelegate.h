@class NSString, NSObject;
@protocol OS_os_log;

@interface FPXPCLogDelegate : NSObject <NSXPCConnectionDelegate> {
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupWithLog:(id)a0 forConnection:(id)a1;

- (void).cxx_destruct;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;

@end
