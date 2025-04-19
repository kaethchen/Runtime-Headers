@class NSStatusItem, NSString, SCObjectList;

@interface SCStatusItem : NSObject {
    id _delegate;
    NSString *_singleRecordingSessionStreamID;
    SCObjectList *_currentRecordingStreams;
}

@property (retain, nonatomic) NSStatusItem *recStatusItem;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)statusMenuStop:(id)a0;
- (void)cleanUpSystemStatusItem;
- (void)deregisterSystemStatusItemWithStream:(id)a0;
- (void)registerSystemStatusItemWithStream:(id)a0;
- (void)setupSystemStatusItemWithOneStream:(id)a0;
- (void)setupSystemStatusItemWithStreams:(id)a0;
- (void)statusMenuItemStop:(id)a0;
- (void)updateSystemStatusItem;

@end
