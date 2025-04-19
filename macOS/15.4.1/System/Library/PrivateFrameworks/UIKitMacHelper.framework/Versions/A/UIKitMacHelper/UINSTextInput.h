@class NSObject;
@protocol OS_xpc_object, UINSRevealController, UINSTextInputDelegate;

@interface UINSTextInput : NSObject <UINSTextInput>

@property (retain, nonatomic) NSObject<OS_xpc_object> *remoteTextInputEndpoint;
@property (readonly, nonatomic) id<UINSRevealController> revealController;
@property (readonly, nonatomic, getter=isFullKeyboardAccessEnabled) BOOL fullKeyboardAccessEnabled;
@property (retain, nonatomic) id<UINSTextInputDelegate> delegate;

+ (id)sharedTextInput;

- (void).cxx_destruct;

@end
