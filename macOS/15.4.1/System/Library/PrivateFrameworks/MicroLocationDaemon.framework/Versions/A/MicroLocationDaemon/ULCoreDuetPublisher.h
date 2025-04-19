@interface ULCoreDuetPublisher : NSObject

+ (void)saveEventForDebugInitialBringUp;
+ (void)clearMicroLocationVisitStream;
+ (void)saveEventsToDuetStream:(id)a0;

@end
