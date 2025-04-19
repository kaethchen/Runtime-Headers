@class NSArray, NSMutableArray;

@interface EKUIAttendeeCommentCompositeGadget : EKUICompositeGadget

@property (retain) NSMutableArray *commentGadgets;
@property (retain) NSMutableArray *existingConstraints;
@property BOOL cachedShouldDisplay;
@property (retain) NSArray *cachedParticipantsWithComment;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (BOOL)needsExpansion;
- (void)updateConstraints;
- (id)initWithViewController:(id)a0;
- (BOOL)updateWithDiff:(id)a0;
- (id)addCommentGadget;
- (void)refreshCachedProperties;
- (BOOL)shouldDisplay;
- (id)subgadgets;

@end
