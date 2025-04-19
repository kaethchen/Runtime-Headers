@class NSLayoutConstraint, NSArray, NSString, GEOLinkedService, NSView, MKImageView, _MKUILabel;

@interface MKPlaceCompleteHoursView : NSView <MKPlaceHoursViewDelegate> {
    GEOLinkedService *_linkedService;
    NSArray *_sortedBusinessHours;
    NSView *_containerViewForHoursAndCategoryName;
    MKImageView *_categoryIconView;
    _MKUILabel *_localizedCategoryNameLabel;
    NSLayoutConstraint *_hoursTopLabelBaselineToCategoryName;
}

@property (retain, nonatomic) NSArray *placeHoursViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)commonInit;
- (void)_contentSizeDidChange;
- (void)hoursViewDidUpdate:(id)a0;
- (id)initWithLinkedService:(id)a0 showTodaysHoursOnly:(BOOL)a1;

@end
