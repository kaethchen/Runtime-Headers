@class NSTimer, NSString, MKMapItem, NSArray, MKImageView, NSColor, NSMutableArray, _MKUILabel, CLLocation, MKLocationManager;
@protocol _MKResultViewDelegate;

@interface _MKResultView : NSView <MKLocationManagerObserver> {
    NSArray *_mapItems;
    int _layoutType;
    id<_MKResultViewDelegate> delegate;
    BOOL _selected;
    BOOL _showsDistance;
    NSMutableArray *_resultConstraints;
    MKLocationManager *_locManager;
    NSString *_primaryLabelText;
    NSString *_secondaryLabelText;
    NSTimer *_refLocationTimer;
    BOOL _isResizableImage;
}

@property (retain, nonatomic) _MKUILabel *nameLabel;
@property (retain, nonatomic) _MKUILabel *secondaryLabel;
@property (retain, nonatomic) _MKUILabel *tertiaryLabel;
@property (nonatomic) double fallbackDistance;
@property (nonatomic) BOOL alwaysUsesBusinessLayout;
@property (retain, nonatomic) MKImageView *imageView;
@property (weak, nonatomic) id<_MKResultViewDelegate> delegate;
@property (readonly, nonatomic) double preferredHeight;
@property (retain, nonatomic) NSColor *primaryTextColor;
@property (retain, nonatomic) NSColor *secondaryTextColor;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) NSString *primaryLabelText;
@property (retain, nonatomic) NSString *secondaryLabelText;
@property (retain, nonatomic) NSArray *mapItems;
@property (retain, nonatomic) CLLocation *referenceLocation;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showsDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })_imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateConstraints;
- (void)updateLayout;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (id)initWithMapItem:(id)a0;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)updateImageView;
- (void)_cancelReferenceLocationTimer;
- (id)_defaultPrimaryLabel;
- (id)_defaultSecondaryCategoryLabel;
- (double)_expectedHeightForLabels;
- (void)_fireReferenceLocationTimer;
- (id)_labelWithFontSize:(double)a0;
- (void)_locationApprovalDidChange;
- (unsigned long long)_maxNameLengthForEndingString:(id)a0;
- (unsigned long long)_maxSecondaryStringLengthForEndingString:(id)a0;
- (void)_updateColors;
- (void)_updateLayoutForAddress;
- (void)_updateLayoutForBusinessOrCategory;
- (void)_updatePrimaryColors;
- (void)_updateSecondaryColors;
- (void)addLabelIfNecessary:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlightsOnTouch:(BOOL)a1;
- (id)initWithMapItems:(id)a0 primaryLabelText:(id)a1;
- (void)locationManagerDidReset:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)setNeedsUpdateConstraints;
- (void)updateSubviews;

@end
