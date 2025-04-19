@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface MOMomentsIntelligenceServiceManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)createConnection;
- (void)fetchGenerativeModelsAvailabilityWithReply:(id /* block */)a0;

@end
