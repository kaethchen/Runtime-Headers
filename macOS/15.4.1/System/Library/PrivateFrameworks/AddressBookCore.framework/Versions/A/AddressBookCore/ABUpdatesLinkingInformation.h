@protocol ABLinkingInfoDataSource;

@interface ABUpdatesLinkingInformation : NSObject {
    id<ABLinkingInfoDataSource> _adapter;
}

- (void)dealloc;
- (id)initWithAdapter:(id)a0;
- (void)linkInsertedPeople;
- (void)unlinkLoneRemainingPeople;
- (void)updateLinkingInformation;
- (void)updatePreferredNameFlags;
- (void)updatePreferredPhotoFlags;

@end
