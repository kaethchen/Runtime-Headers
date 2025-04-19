@class NSNumber, NSString, NSMutableDictionary;

@interface ICCommand : NSObject

@property (copy, nonatomic) NSNumber *transactionID;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) id delegate;
@property (nonatomic) double timeSent;
@property (nonatomic) double timeCompleted;

- (void).cxx_destruct;

@end
