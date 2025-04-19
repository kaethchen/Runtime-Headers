@class _SWCollaborationButtonView, NSItemProvider, SWHighlight;

@interface _SWCollaborationToolbarItem : NSToolbarItem

@property (nonatomic, retain) SWHighlight *collaborationHighlight;
@property (nonatomic, getter=isContentShared) BOOL contentShared;
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButtonView;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (nonatomic) unsigned long long activeParticipantCount;
@property (nonatomic) BOOL isContentShared;

- (void).cxx_destruct;
- (id)initWithItemProvider:(id)a0;
- (id)initWithHighlight:(id)a0;
- (void)setDetailViewListContent:(id)a0;
- (void)setShowManageButton:(BOOL)a0;
- (void)setManageButtonTitle:(id)a0;
- (void)dismissPopoverAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithCollaborationButtonView:(id)a0;
- (id)initWithHighlight:(id)a0 detailViewListContent:(id)a1;

@end
