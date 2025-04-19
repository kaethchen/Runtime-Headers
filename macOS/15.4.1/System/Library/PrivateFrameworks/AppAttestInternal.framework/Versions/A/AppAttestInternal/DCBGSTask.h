@class NSString, NSNumber;

@interface DCBGSTask : NSObject

@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSString *observerID;
@property (retain, nonatomic) NSNumber *refreshInterval;
@property (copy, nonatomic) id /* block */ taskHandler;

- (void).cxx_destruct;
- (id)initWithTaskIdentifier:(id)a0 observerIdentifier:(id)a1;

@end
