@class NSControl, NSString, NSView, SearchUIDetailedRowModel;
@protocol SearchUIFeedbackDelegate, SearchUIAccessoryViewDelegate;

@interface SearchUIAccessoryViewController : NSObject <SearchUIDetailedRowComponent>

@property (retain, nonatomic) NSView *view;
@property (retain, nonatomic) NSControl *control;
@property (weak) id<SearchUIAccessoryViewDelegate> delegate;
@property (readonly) unsigned long long type;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)accessoryViewClassForRowModel:(id)a0;
+ (BOOL)supportsRowModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)hide;
- (id)setupView;
- (void)buttonPressed;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)containsSymbolImage;
- (id)controlInView:(id)a0;
- (void)didEngageAction:(unsigned long long)a0 destination:(unsigned long long)a1;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (BOOL)shouldVerticallyCenter;
- (void)updateWithRowModel:(id)a0;

@end
