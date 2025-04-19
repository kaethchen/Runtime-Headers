@class NSString;

@interface ULOdometryClientAdapter : NSObject <ULOdometryProviderDelegate>

@property (copy, nonatomic) id /* block */ didReceiveOdometryErrorBlock;
@property (copy, nonatomic) id /* block */ didReceiveOdometryUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didReceiveOdometryError:(id)a0 withDate:(id)a1;
- (void)didReceiveOdometryUpdate:(id)a0 uuid:(id)a1;

@end
