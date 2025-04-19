@interface _NSBrowserDropDestContext : NSObject {
    long long targetColumn;
    long long targetRow;
    unsigned long long targetDropOperation;
    unsigned long long dragOperation;
    long long lastTargetRow;
    long long lastTargetColumn;
    unsigned long long lastDragOperationMask;
    unsigned long long lastDropOperation;
    BOOL lastOpInTopHalf;
}

- (id)init;

@end
