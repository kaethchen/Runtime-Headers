@class NSString;

@interface GameCenterUI.GKMultiplayerParticipantCollectionViewCell : GameCenterUI.CollectionReusableView {
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ silhouetteView;
    void /* unknown type, empty encoding */ shouldDisplaySilhouette;
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ removeButton;
    void /* unknown type, empty encoding */ vibrantRemoveButton;
    void /* unknown type, empty encoding */ viewStatus;
    void /* unknown type, empty encoding */ statusAccessoryView;
    void /* unknown type, empty encoding */ displaysInviteeSourceIcon;
    void /* unknown type, empty encoding */ messagesIconView;
    void /* unknown type, empty encoding */ tapHandler;
    void /* unknown type, empty encoding */ layoutMode;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic) void /* unknown type, empty encoding */ sharePlayEnabled;
@property (nonatomic, copy) id /* block */ tapHandler;
@property (nonatomic) BOOL removeButtonHidden;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyWithParticipant:(id)a0 number:(long long)a1 isRemovingEnabled:(BOOL)a2 isInvitingEnabled:(BOOL)a3 layoutMode:(long long)a4;
- (void)didTapAddButton:(id)a0;
- (void)didTapRemoveButton:(id)a0;

@end
