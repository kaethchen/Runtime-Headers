@interface HomeIntelligenceActivityLogger : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ home;
    void /* unknown type, empty encoding */ scheduler;
    void /* unknown type, empty encoding */ eventStream;
    void /* unknown type, empty encoding */ activityObservers;
    void /* unknown type, empty encoding */ submitter;
}

- (id)init;
- (void)configure;
- (id)initWithHome:(id)a0;

@end
