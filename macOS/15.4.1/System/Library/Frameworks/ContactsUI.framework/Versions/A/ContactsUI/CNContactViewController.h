@class NSArray, CNContact, ABAPIAdapter, CNContainer, NSObject;
@protocol OS_os_log, CNContactViewControllerDelegate, ABPersonViewProtocol;

@interface CNContactViewController : NSViewController <ABPersonViewClientProtocol> {
    ABAPIAdapter<ABPersonViewProtocol> *_apiAdapter;
}

@property (class, readonly) NSObject<OS_os_log> *os_log;
@property (class, readonly, nonatomic) NSArray *allPropertyKeys;

@property (retain) CNContact *contactStorage;
@property (weak, nonatomic) id<CNContactViewControllerDelegate> contactViewControllerDelegate;
@property (nonatomic) double desiredHeight;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long authorizedMode;
@property (retain, nonatomic) CNContainer *parentContainer;
@property (copy) CNContact *contact;

+ (id)descriptorForRequiredKeys;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (id)serviceViewControllerProxy;
- (id)_remotePersonView;
- (id)apiAdapter;
- (void)desiredHeightChangedTo:(double)a0;
- (void)headerWasClicked;
- (void)setPropertyKeysToDisplay:(id)a0;
- (void)startSharingSessionForServiceNamed:(id)a0 listenerEndpoint:(id)a1;

@end
