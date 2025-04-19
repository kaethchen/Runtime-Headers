@class NSError, NSMutableDictionary;

@interface CKDMMCSItemGroupSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsByGroupTuple;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addItem:(id)a0;
- (id)initWithItems:(id)a0;
- (id)CKPropertiesDescription;
- (id)allItemGroups;
- (void)setCloneContext:(id)a0;

@end
