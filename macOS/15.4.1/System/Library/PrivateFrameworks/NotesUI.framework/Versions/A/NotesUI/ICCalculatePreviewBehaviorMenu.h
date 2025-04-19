@interface ICCalculatePreviewBehaviorMenu : NSObject {
    void /* unknown type, empty encoding */ allBehaviors;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ note;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isMathEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)didSelectCalculatePreviewBehavior:(id)a0;
- (id)initWithNote:(id)a0 isMathEnabled:(BOOL)a1;
- (id)makeMenuItem;

@end
