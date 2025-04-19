@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface DASDelegate : NSObject <DASDelegateServiceProtocol>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connectionToService;

- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)appLaunchResumeInfoWithStartDate:(id)a0 withEndDate:(id)a1 withReply:(id /* block */)a2;
- (void)evaluateTailspinAt:(id)a0 withReply:(id /* block */)a1;

@end
