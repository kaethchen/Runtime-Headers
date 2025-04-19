@class NSString;

@interface SiriSharedUISAEUserUtteranceViewModel : NSObject {
    void /* unknown type, empty encoding */ latencySummary;
    void /* unknown type, empty encoding */ taskIdentifier;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ speech;
@property (nonatomic, copy) NSString *latencySummary;
@property (nonatomic) void /* unknown type, empty encoding */ shouldShow;
@property (nonatomic, copy) NSString *taskIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSpeech:(id)a0 latencySummary:(id)a1 shouldShow:(BOOL)a2 taskIdentifier:(id)a3;

@end
