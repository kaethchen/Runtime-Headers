@class NSString;

@interface DDASLLogger : DDAbstractLogger <DDLogger> {
    struct __asl_object_s { } *client;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void)logMessage:(id)a0;
- (id)loggerName;

@end
