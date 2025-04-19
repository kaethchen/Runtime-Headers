@class FSMimic, FSNode;

@interface FSMimicPopulator : NSObject {
    FSNode *_node;
}

@property (readonly, nonatomic) FSMimic *mimic;

- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (BOOL)populateHFSTypeAndCreatorWithError:(id *)a0;
- (void)populateHasChildNodeWithRelativePath:(id)a0;
- (BOOL)populateSimpleSelector:(SEL)a0 error:(id *)a1;
- (BOOL)populateValueForKey:(id)a0 error:(id *)a1;

@end
