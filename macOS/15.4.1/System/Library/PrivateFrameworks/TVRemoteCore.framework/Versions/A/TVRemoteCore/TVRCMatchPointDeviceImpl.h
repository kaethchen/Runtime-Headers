@class NSString, TVRCHMServiceWrapper;
@protocol _TVRCDeviceImplDelegate;

@interface TVRCMatchPointDeviceImpl : NSObject <TVRCHMServiceWrapperDelegate, _TVRCDeviceImpl>

@property (retain, nonatomic) TVRCHMServiceWrapper *service;
@property (weak, nonatomic) id<_TVRCDeviceImplDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long priority;

+ (id)implWithService:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (id)identifier;
- (long long)connectionType;
- (void)disconnect;
- (void)connect;
- (id)model;
- (id)initWithService:(id)a0;
- (id)alternateIdentifiers;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (id)keyboardController;
- (void)setAuthenticationSupported:(BOOL)a0;
- (void)sendTouchEvent:(id)a0;
- (void)connectedToService:(id)a0;
- (void)disconnectedFromService:(id)a0 error:(id)a1;
- (unsigned long long)pairingCapability;
- (void)service:(id)a0 updatedName:(id)a1;
- (id)supportedButtons;
- (BOOL)supportsDirectCaptionQueries;
- (BOOL)supportsFindMyRemote;
- (BOOL)supportsTouchEvents;

@end
