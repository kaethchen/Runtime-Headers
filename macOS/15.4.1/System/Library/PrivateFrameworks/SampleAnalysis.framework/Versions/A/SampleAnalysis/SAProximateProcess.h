@class NSString, NSMutableArray, NSMutableDictionary;

@interface SAProximateProcess : NSObject {
    unsigned int _count;
    NSString *_name;
    NSMutableArray *_pids;
    NSMutableDictionary *_originProcesses;
}

- (void).cxx_destruct;

@end
