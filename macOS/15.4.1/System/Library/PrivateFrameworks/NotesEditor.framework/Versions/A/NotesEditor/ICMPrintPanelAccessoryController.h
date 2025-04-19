@interface ICMPrintPanelAccessoryController : NSViewController <NSPrintPanelAccessorizing>

@property (nonatomic) BOOL pageNumbering;
@property (nonatomic) BOOL wrappingToFit;
@property (nonatomic) BOOL showsWrappingToFit;

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)keyPathsForValuesAffectingPreview;
- (id)localizedSummaryItems;

@end
