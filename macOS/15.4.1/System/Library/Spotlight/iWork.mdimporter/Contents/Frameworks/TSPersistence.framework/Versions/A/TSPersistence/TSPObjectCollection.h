@class NSArray;

@interface TSPObjectCollection : TSPObject

@property (readonly, nonatomic) NSArray *objects;

+ (BOOL)tsp_isInternalObjectContainerClass;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 objects:(id)a1;
- (id)tsp_publicLoggingDescription;

@end
