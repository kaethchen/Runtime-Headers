@interface AMPTracklistFooterLockup : NSTableCellView {
    void /* unknown type, empty encoding */ specialTreatmentLine;
    void /* unknown type, empty encoding */ summaryLine;
    void /* unknown type, empty encoding */ addedStack;
    void /* unknown type, empty encoding */ listenedStack;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, readonly) BOOL hideAddedAvatars;
@property (nonatomic, readonly) BOOL hideListenedAvatars;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
