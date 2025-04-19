@class AUAudioUnit, NSUUID, NSString, NSRemoteViewController, RemoteAUv2ViewController;

@interface RemoteAUv2ContainerViewController : NSViewController {
    NSUUID *_serviceID;
    NSUUID *_audioUnitID;
    AUAudioUnit *_audioUnit;
    NSString *_serviceName;
    id /* block */ _connectionHandler;
    id /* block */ _dummyConnectionHandler;
    RemoteAUv2ViewController *_remoteViewController;
    NSRemoteViewController *_dummyRemoteViewController;
    id /* block */ _completionBlock;
}

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)windowDestroyed;
- (void)fetchAUViewController;
- (id)initWithServiceID:(id)a0 audioUnitID:(id)a1 audioUnit:(id)a2 serviceName:(id)a3 completionHandler:(id /* block */)a4;
- (void)resizeRemoteView;

@end
