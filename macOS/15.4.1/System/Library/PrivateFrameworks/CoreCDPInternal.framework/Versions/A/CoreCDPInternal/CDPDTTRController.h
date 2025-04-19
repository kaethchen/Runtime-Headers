@interface CDPDTTRController : NSObject

- (BOOL)_isTTREnabledForDict:(id)a0;
- (id)_normalizedTTRErrorForEvent:(id)a0;
- (void)_performTTRForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_triggerTTRForEvent:(id)a0 componentName:(id)a1 componentVersion:(id)a2 componentID:(id)a3 additionalDeviceTypes:(id)a4 fullDiagnostic:(BOOL)a5;
- (id)_ttrInfoForEvent:(id)a0 forTTRConfigSupportedErrors:(id)a1;
- (id)_ttrInfoForEventErrorDict:(id)a0 inTTRConfigSupportedErrors:(id)a1;
- (void)requestTTRIfSupportedForEvent:(id)a0;
- (void)requestTTRWithTitle:(id)a0 message:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(id)a4 keywords:(id)a5 additionalDeviceTypes:(id)a6 fullDiagnostic:(BOOL)a7 completion:(id /* block */)a8;

@end
