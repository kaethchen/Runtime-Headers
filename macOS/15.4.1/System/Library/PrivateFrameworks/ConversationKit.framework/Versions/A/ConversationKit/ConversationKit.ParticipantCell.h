@class NSString;

@interface ConversationKit.ParticipantCell : NSCollectionViewItem {
    void /* unknown type, empty encoding */ participantIdentifier;
    void /* unknown type, empty encoding */ accessibilityDisplayName;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ participantView;
@property (nonatomic, copy) NSString *accessibilityDisplayName;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;

@end
