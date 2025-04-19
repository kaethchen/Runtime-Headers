@class NSArray;

@interface SACallTreeStateChildren : SACallTreeNode {
    int _originPid;
    int _proximatePid;
    NSArray *_timeRanges;
    NSArray *_ioEvents;
}

- (void).cxx_destruct;

@end
