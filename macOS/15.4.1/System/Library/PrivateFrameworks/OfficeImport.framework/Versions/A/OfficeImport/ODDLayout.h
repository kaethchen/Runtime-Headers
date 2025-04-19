@class ODDLayoutNode;

@interface ODDLayout : NSObject {
    ODDLayoutNode *mRootNode;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)rootNode;

@end
