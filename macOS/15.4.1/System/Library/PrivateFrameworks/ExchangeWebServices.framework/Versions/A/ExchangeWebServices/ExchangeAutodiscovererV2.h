@class NSString;

@interface ExchangeAutodiscovererV2 : NSObject <EWSAutodiscoverV2BindingDelegate>

@property (retain, nonatomic) ExchangeAutodiscovererV2 *me;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL isOnPrem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
