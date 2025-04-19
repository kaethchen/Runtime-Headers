@class CoreRCManagerClient;

@interface CoreIRLearningSessionClient : CoreIRLearningSession

@property (nonatomic) CoreRCManagerClient *manager;

- (void)endLearning;
- (BOOL)startLearningCommand:(unsigned long long)a0;

@end
