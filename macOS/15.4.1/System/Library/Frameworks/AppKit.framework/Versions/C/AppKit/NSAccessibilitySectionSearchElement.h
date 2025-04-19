@class NSMutableSet;

@interface NSAccessibilitySectionSearchElement : NSObject

@property (readonly, nonatomic) id element;
@property (retain, nonatomic) NSMutableSet *searchKeys;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithElement:(id)a0;

@end
