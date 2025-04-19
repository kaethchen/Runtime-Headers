@class NSString, ASDTPMAction, NSCondition;

@interface ASDTPMActionWaiter : ASDTPMAction <ASDTDeviceInterestProtocol>

@property (retain, nonatomic) NSString *waitActionName;
@property (weak, nonatomic) ASDTPMAction *waitAction;
@property (nonatomic) unsigned int waitTimeoutUs;
@property (retain, nonatomic) NSCondition *waitForActionCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
