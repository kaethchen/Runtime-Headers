@class NSUUID, AceObject, NSViewController;
@protocol SiriSharedUIViewControlling;

@interface SiriSharedUITranscriptItem : NSObject

@property (copy, nonatomic) NSUUID *itemIdentifier;
@property (copy, nonatomic) NSUUID *taskIdentifier;
@property (retain, nonatomic) NSViewController<SiriSharedUIViewControlling> *viewController;
@property (retain, nonatomic) AceObject *aceObject;
@property (nonatomic, getter=isRestored) BOOL restored;
@property (nonatomic) BOOL shouldBeExposed;
@property (nonatomic) BOOL snippetViewControllerHasBeenUnloaded;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousFrame;

+ (id)transcriptItemWithAceObject:(id)a0;
+ (id)additionalContentViewPlatterCategories;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAceObject:(id)a0;
- (long long)platterCategory;
- (BOOL)isAnnouncementItem;
- (BOOL)isConversationItem;
- (BOOL)isHintItem;

@end
