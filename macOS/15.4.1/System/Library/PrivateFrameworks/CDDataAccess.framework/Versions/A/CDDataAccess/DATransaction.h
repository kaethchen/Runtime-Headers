@class NSString;

@interface DATransaction : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *transactionId;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0;

@end
