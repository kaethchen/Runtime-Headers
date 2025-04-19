@class MKIncidentDetailContentView;
@protocol MKIncidentDetailDelegate;

@interface MKIncidentExtendedDetailCell : MKTableViewCell {
    MKIncidentDetailContentView *_incidentContentView;
}

@property (weak, nonatomic) id<MKIncidentDetailDelegate> delegate;

- (void).cxx_destruct;
- (void)configureWithAdvisories:(id)a0 artwork:(id)a1;
- (void)configureWithAdvisoryItem:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
