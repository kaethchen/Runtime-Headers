@class CSUserQueryParser, NSString, NSDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SGTQueryGeniusReserved : NSObject {
    NSObject<OS_dispatch_queue> *_groupQueue;
    NSObject<OS_dispatch_queue> *_parserQueue;
    NSObject<OS_dispatch_group> *_lastGroup;
    CSUserQueryParser *_parser;
    NSString *_currentInputString;
    NSDictionary *_parseResult;
    NSDate *_date;
}

- (id)init;
- (void).cxx_destruct;

@end
