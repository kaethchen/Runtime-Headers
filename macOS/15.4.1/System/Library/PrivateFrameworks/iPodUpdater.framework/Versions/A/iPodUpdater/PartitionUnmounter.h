@interface PartitionUnmounter : NSObject {
    int err;
}

- (int)lastError;
- (void)unmountPartition:(id)a0;

@end
