@class NSArray, NSNumber;

@interface AMSUIWebMediaQueryAction : AMSUIWebAction

@property (retain) NSArray *bundleIDs;
@property (retain) NSNumber *observing;
@property (retain) NSArray *storeItemIDs;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
