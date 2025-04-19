@class NSString, NSObject;
@protocol OS_os_log;

@interface AeroMLTracerSession : NSObject

@property (readonly, copy, nonatomic) NSString *traceId;
@property (readonly, copy, nonatomic) NSString *projectName;
@property (retain, nonatomic) NSObject<OS_os_log> *traceSignpost;
@property (retain, nonatomic) NSObject<OS_os_log> *traceChannel;

+ (id)generateTraceId;
+ (id)logChannelWithSubsystem:(const char *)a0 category:(const char *)a1;

- (void).cxx_destruct;
- (id)createRootSpanWithName:(id)a0;
- (id)createSubSpanWithName:(id)a0 parentSpanId:(id)a1;
- (id)initWithProjectName:(id)a0;
- (id)initWithTraceId:(id)a0 projectName:(id)a1;

@end
