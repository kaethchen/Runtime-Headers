@class NSString, NSObject;
@protocol OS_os_transaction;

@interface WDTransaction : NSObject

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *transactionDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;

@end
