@protocol PKAppIntentCoordinator;

@interface PKAppIntentDependencyManager : NSObject

@property (weak) id<PKAppIntentCoordinator> coordinator;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
