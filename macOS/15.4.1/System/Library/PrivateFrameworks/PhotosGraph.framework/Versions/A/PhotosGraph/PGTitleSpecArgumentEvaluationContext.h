@class PGGraphLocationHelper, CLSServiceManager;

@interface PGTitleSpecArgumentEvaluationContext : NSObject

@property (readonly) PGGraphLocationHelper *locationHelper;
@property (readonly) CLSServiceManager *serviceManager;

- (void).cxx_destruct;
- (id)initWithLocationHelper:(id)a0 serviceManager:(id)a1;

@end
