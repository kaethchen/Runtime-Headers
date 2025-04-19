@class NSMutableDictionary;

@interface MFPObjectTable : NSObject {
    NSMutableDictionary *mObjects;
}

- (id)init;
- (void).cxx_destruct;
- (id)objectAtIndex:(int)a0;
- (void)setObject:(id)a0 atIndex:(int)a1;

@end
