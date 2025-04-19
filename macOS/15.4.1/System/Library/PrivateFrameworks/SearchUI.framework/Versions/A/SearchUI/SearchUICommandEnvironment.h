@class NSString, NSViewController, SFResultSection, NSView;
@protocol SearchUICommandDelegate, SearchUIRowModelViewDelegate, SearchUIFeedbackDelegate, SearchUIWatchListDelegate, SearchUICardViewDelegate;

@interface SearchUICommandEnvironment : NSObject <NSCopying>

@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (weak, nonatomic) id<SearchUIRowModelViewDelegate> rowModelViewDelegate;
@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (weak, nonatomic) id<SearchUIWatchListDelegate> watchListDelegate;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) long long selectableGridPunchoutIndex;
@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *sectionTitle;
@property (nonatomic) unsigned long long queryId;
@property (retain, nonatomic) SFResultSection *section;
@property (weak, nonatomic) NSViewController *presentingViewController;
@property (weak, nonatomic) NSView *sourceView;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
