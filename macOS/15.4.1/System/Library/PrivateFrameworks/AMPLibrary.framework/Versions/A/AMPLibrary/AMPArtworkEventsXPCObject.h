@protocol AMPArtworkEventsProtocol;

@interface AMPArtworkEventsXPCObject : NSObject <AMPArtworkEventsProtocol>

@property (weak, nonatomic) id<AMPArtworkEventsProtocol> eventsDelegate;

- (void).cxx_destruct;
- (void)notifyArtworkStatusChangedWithInfoArray:(id)a0;

@end
