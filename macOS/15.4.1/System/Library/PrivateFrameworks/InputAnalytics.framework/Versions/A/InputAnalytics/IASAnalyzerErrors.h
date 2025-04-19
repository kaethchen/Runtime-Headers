@class NSMutableSet;

@interface IASAnalyzerErrors : NSObject

@property (retain, nonatomic) NSMutableSet *errors;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)errorString;
- (void)logErrorCodeIfNotNil:(id)a0;

@end
