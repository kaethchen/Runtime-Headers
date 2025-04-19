@class TSUSparseArray;

@interface TSTTableHeaderStorageBucket : TSPObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _bounds;
}

@property (retain, nonatomic) TSUSparseArray *data;
@property (nonatomic) unsigned long long styleCount;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)packageLocator;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
