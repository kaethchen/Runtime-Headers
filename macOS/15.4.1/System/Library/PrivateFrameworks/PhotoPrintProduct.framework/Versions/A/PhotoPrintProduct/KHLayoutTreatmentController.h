@class NSArray, KHLayout;

@interface KHLayoutTreatmentController : KHTreatmentArrayController {
    NSArray *_treatments;
}

@property (readonly, nonatomic) NSArray *treatments;
@property (readonly, nonatomic) KHLayout *layout;
@property (readonly, nonatomic) NSArray *themeConfigurations;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)selectedIndex;
- (id)treatmentAtIndex:(unsigned long long)a0;
- (unsigned long long)thumbnailType;
- (id)initWithLayout:(id)a0 themeConfigurations:(id)a1;
- (unsigned long long)numberOfTreatments;
- (void)setSelectedTreatment:(id)a0;
- (id)supportedTreatments:(BOOL)a0;

@end
