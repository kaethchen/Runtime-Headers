@class NSString, NSImage, NSArray, MKImageView, _MKUILabel;

@interface MKTransitItemIncidentView : NSView <MKTransitItemIncidentView> {
    MKImageView *_incidentIconImageView;
    BOOL _needsConstraintsRebuild;
    NSArray *_constraints;
    _MKUILabel *_messageLabel;
}

@property (retain, nonatomic) NSImage *incidentIcon;
@property (copy, nonatomic) NSString *incidentMessage;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)_configureWithMessage:(id)a0 referenceDate:(id)a1 lastUpdated:(id)a2 incidentIsBlocking:(BOOL)a3 shouldShowImage:(BOOL)a4 inSiri:(BOOL)a5;
- (void)configureViews;
- (void)configureWithIncident:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (void)configureWithIncidentMessage:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (void)configureWithMessage:(id)a0 incident:(id)a1 referenceDate:(id)a2 shouldShowImage:(BOOL)a3 inSiri:(BOOL)a4;
- (void)rebuildConstraints;

@end
