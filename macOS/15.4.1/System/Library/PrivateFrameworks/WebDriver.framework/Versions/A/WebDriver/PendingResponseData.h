@class WDProtocolCommand;

@interface PendingResponseData : NSObject

@property (nonatomic) long long sequenceId;
@property (retain, nonatomic) WDProtocolCommand *originatingCommand;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;

@end
