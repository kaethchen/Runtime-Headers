@class NSString, NSMutableArray;

@interface SAOriginProcess : NSObject {
    unsigned int _count;
    NSString *_name;
    NSMutableArray *_pids;
}

- (void).cxx_destruct;

@end
