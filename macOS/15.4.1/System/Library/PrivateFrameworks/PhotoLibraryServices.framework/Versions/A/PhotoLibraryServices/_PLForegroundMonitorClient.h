@class NSSet;

@interface _PLForegroundMonitorClient : NSObject

@property (readonly, nonatomic) NSSet *bundleIdentifiers;
@property (readonly, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithBundleIdentifiers:(id)a0 block:(id /* block */)a1;

@end
