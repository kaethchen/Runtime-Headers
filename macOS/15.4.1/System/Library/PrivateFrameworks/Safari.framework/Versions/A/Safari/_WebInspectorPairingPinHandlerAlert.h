@class NSString, NSDictionary, RWITarget, AKPinFieldView;

@interface _WebInspectorPairingPinHandlerAlert : Alert <AKPinFieldViewDelegate> {
    AKPinFieldView *_pinField;
    id /* block */ _pinHandler;
}

@property (readonly, nonatomic) RWITarget *target;
@property (readonly, nonatomic) long long reason;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
