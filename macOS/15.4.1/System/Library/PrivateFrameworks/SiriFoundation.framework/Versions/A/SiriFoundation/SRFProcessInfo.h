@class NSXPCConnection;

@interface SRFProcessInfo : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToSiri;

- (void).cxx_destruct;
- (void)beginEducationActivityWithReason:(id)a0;
- (void)beginMainStagePresentationActivityWithReason:(id)a0;
- (void)endEducationActivtyWithReason:(id)a0;
- (void)endMainStagePresentationActivityWithReason:(id)a0;

@end
