@class NSArray, NSMutableParagraphStyle, NSString, NSTouchBar, NSCandidateListTouchBarItem;

@interface CalUICandidateTouchBar : NSObject <NSTouchBarProvider>

@property (retain) NSTouchBar *touchBar;
@property (retain) NSCandidateListTouchBarItem *candidateListTouchBarItem;
@property (retain) NSArray *candidates;
@property (retain) NSMutableParagraphStyle *subtitleParagraphStyle;
@property (copy, nonatomic) id /* block */ titleBlock;
@property (copy, nonatomic) id /* block */ subtitleBlock;
@property (copy, nonatomic) id /* block */ imageBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
