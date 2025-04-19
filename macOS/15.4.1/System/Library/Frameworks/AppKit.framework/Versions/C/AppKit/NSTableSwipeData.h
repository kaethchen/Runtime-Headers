@class NSTableRowView, NSTableDeleteScanLineView, NSTableRowViewSpringAnimation;

@interface NSTableSwipeData : NSObject {
    BOOL hasMoreThanOneButtonAndAConsumer;
    long long rowIndex;
    NSTableRowView *rowView;
    unsigned long long rowEdge;
    double totalSlideAmount;
    double cellOffset;
    long long token;
    double previousPercentage;
    double percentage;
    double consumePercentage;
    double buttonPercentage;
    NSTableRowViewSpringAnimation *catchupAnimation;
    NSTableRowViewSpringAnimation *finishAnimation;
    NSTableDeleteScanLineView *scanLineView;
}

- (void)dealloc;
- (id)init;

@end
