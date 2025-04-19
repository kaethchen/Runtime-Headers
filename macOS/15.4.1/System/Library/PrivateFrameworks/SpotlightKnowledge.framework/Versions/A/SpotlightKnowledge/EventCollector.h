@class NSMutableDictionary;

@interface EventCollector : NSObject

@property (retain, nonatomic) NSMutableDictionary *collectedData;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)handleEventWithStr1:(id)a0 str2:(id)a1 num:(unsigned long long)a2;
- (void)printResultsWithBlock:(id /* block */)a0;

@end
