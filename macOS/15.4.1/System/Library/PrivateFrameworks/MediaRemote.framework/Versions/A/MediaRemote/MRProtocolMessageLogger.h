@interface MRProtocolMessageLogger : NSObject

@property (nonatomic) BOOL shouldLog;
@property (nonatomic) BOOL shouldVerboselyLog;

+ (id)sharedLogger;

- (id)init;
- (void)logMessage:(id)a0 client:(id)a1 protocolMessage:(id)a2;
- (void)logMessage:(id)a0 label:(id)a1 deviceInfo:(id)a2 protocolMessage:(id)a3;

@end
