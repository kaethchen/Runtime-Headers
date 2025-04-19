@class NSArray, GEOPDGroupParams;

@interface GEOButtonItemGroup : GEOButtonItem {
    GEOPDGroupParams *_params;
}

@property (readonly, nonatomic) int groupType;
@property (readonly, nonatomic) NSArray *buttonItems;
@property (readonly, nonatomic) unsigned long long actionDataIndex;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (int)buttonType;
- (id)initWithGroupParams:(id)a0;

@end
