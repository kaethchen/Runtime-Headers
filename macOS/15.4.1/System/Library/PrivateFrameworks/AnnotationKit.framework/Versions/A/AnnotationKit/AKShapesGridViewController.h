@class NSArray;

@interface AKShapesGridViewController : AKGridViewController {
    unsigned long long _numberColumns;
    long long _orientation;
}

@property (readonly) NSArray *shapes;
@property (readonly) NSArray *optionalImages;

+ (id)_toolTipForTag:(long long)a0;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)keyUp:(id)a0;
- (void)viewDidLoad;
- (id)initWithController:(id)a0 toolTags:(id)a1 optionalImages:(id)a2 columns:(unsigned long long)a3 orientation:(long long)a4;
- (id)_gridViewItemWithImage:(id)a0 forTag:(long long)a1;
- (id)_shapesGridViewItems;
- (void)_validateShapesItems:(id)a0;

@end
