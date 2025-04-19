@class TSPObject, NSMutableArray;

@interface TSKTreeNodeDeprecated : TSPObject {
    NSMutableArray *mChildren;
    TSPObject *mObject;
}

@property (retain, nonatomic) TSPObject *dataObject;
@property (retain, nonatomic) NSMutableArray *children;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addChild:(id)a0;
- (id)nodeAtIndex:(unsigned long long)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
