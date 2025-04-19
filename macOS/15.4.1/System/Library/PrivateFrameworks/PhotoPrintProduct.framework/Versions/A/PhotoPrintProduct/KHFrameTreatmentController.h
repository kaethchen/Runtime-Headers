@class KHFrame, NSArray, KHTheme, NSMutableArray;

@interface KHFrameTreatmentController : KHTreatmentArrayController {
    NSMutableArray *_treatments;
}

@property (readonly, nonatomic) NSArray *treatments;
@property (readonly, nonatomic) KHFrame *frame;
@property (readonly, nonatomic) KHTheme *theme;

- (void).cxx_destruct;
- (unsigned long long)selectedIndex;
- (id)treatmentAtIndex:(unsigned long long)a0;
- (unsigned long long)thumbnailType;
- (id)supportedTreatmentsWithCaption:(BOOL)a0;
- (id)initWithFrame:(id)a0 theme:(id)a1;
- (unsigned long long)numberOfTreatments;
- (void)setSelectedTreatment:(id)a0;

@end
