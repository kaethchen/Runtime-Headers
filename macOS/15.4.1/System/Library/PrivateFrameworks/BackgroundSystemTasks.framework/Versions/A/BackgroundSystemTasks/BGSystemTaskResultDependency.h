@class NSString;

@interface BGSystemTaskResultDependency : NSObject <BGSystemTaskSerializableDependency, BGSystemTaskDependency>

@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
