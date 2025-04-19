@class NSDictionary, NSString;

@interface PXTipsHelper_Swift : NSObject <NSPopoverDelegate> {
    void /* unknown type, empty encoding */ presentedTipID;
}

@property (class, nonatomic, copy) NSDictionary *presentationDelegates;
@property (class, nonatomic) BOOL isInitializingTips;
@property (class, nonatomic) BOOL hasInitializedTips;

@property (nonatomic, copy) NSString *presentedTipID;
@property (nonatomic, weak) void /* unknown type, empty encoding */ tipPopover;
@property (nonatomic, weak) void /* unknown type, empty encoding */ tipPopoverDelegate;

+ (void)setup;
+ (BOOL)isTipInvalidated:(id)a0;
+ (void)setTip:(id)a0 presentationDelegate:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)updatePopoverTip:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
