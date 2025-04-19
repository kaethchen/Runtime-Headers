@class NSDictionary;

@interface MediaPlaybackCore.UserEventsMonitor : _TtCs12_SwiftObject <MFStateDumpable, MFResettable> {
    void /* unknown type, empty encoding */ timeout;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ monitors;
    void /* unknown type, empty encoding */ reporter;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)a0;

@end
