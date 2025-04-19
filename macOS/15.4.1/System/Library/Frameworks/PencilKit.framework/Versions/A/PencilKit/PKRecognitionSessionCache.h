@interface PKRecognitionSessionCache : NSObject

+ (id)_recognitionSessions;
+ (void)addRecognitionSession:(id)a0 forUUID:(id)a1;
+ (void)cleanupSessionsIfNecessary;
+ (id)recognitionSessionForUUID:(id)a0;

@end
