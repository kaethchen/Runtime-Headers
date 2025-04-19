@class NSString;

@interface VisualIntelligence.AnyVIAEvent : NSObject <VIAEvent> {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) NSString *originatingApplication;
@property (nonatomic, readonly) unsigned long long queryID;
@property (nonatomic, readonly) BOOL shouldReportDirectly;

- (id)init;
- (void).cxx_destruct;
- (id)feedback;

@end
