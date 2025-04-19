@interface MRLayerCommand : NSObject {
    int commandID;
    id object;
}

- (void)dealloc;
- (id)initWithCommand:(int)a0 andObject:(id)a1;

@end
