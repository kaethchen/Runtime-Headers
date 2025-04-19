@class NSArray, IOUserNotification, NSMutableArray;

@interface AuthRequestWrapper : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) IOUserNotification *userNotification;
@property (nonatomic) long long pairingStatus;
@property (retain, nonatomic) NSArray *pairingCodeDigits;
@property (retain, nonatomic) NSMutableArray *pairingCodeDigitsEntered;
@property (nonatomic) unsigned long long pairingFailureCount;

+ (id)requestWrapperWithCompletion:(id /* block */)a0 andUserNotification:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
