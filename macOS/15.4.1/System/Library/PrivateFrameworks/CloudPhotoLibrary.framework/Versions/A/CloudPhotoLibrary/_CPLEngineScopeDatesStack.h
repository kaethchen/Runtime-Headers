@class NSString, NSMutableArray, NSDate;

@interface _CPLEngineScopeDatesStack : NSObject {
    NSDate *_now;
    NSDate *_earliestDate;
    NSDate *_lastDate;
    NSMutableArray *_intermediateStatuses;
    NSString *_proposedKey;
}

- (void).cxx_destruct;

@end
