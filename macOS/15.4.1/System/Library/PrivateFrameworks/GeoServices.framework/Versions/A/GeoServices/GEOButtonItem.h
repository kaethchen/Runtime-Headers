@class GEOPDButtonItem;

@interface GEOButtonItem : NSObject {
    GEOPDButtonItem *_buttonItem;
}

@property (readonly, nonatomic) int buttonType;

+ (int)GEOButtonItemTypeFromGEOPDButtonItemType:(int)a0;
+ (id)buttonItemsFromPDButtonItems:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithButtonItem:(id)a0;

@end
