@class NSArray, NSBundle;

@interface IASetupPlugin : NSObject

@property (retain) NSBundle *bundle;
@property (readonly) NSArray *services;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (id)setupViewControllerForServices:(id)a0;

@end
