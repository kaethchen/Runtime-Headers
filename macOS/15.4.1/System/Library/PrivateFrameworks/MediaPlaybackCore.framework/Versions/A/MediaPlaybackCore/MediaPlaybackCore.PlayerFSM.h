@class NSDictionary;

@interface MediaPlaybackCore.PlayerFSM : _TtCs12_SwiftObject <MFResettable, MFStateDumpable> {
    void /* unknown type, empty encoding */ playbackDefaults;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ states;
    void /* unknown type, empty encoding */ controller;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)a0;

@end
