@class NSObject, INIntent;
@protocol OS_dispatch_queue;

@interface INCIntentDefaultValueProvider : NSObject

@property (readonly, copy, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionHandlingQueue;

- (void).cxx_destruct;
- (id)initWithIntent:(id)a0;
- (BOOL)isExpectedDefaultValueError:(id)a0;
- (void)loadDefaultValuesWithAttributes:(id)a0 extensionProxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadDefaultValuesWithCompletionHandler:(id /* block */)a0;

@end
