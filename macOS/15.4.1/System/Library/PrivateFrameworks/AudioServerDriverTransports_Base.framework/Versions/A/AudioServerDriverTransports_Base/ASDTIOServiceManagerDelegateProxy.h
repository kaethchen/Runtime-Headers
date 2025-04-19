@class NSSet;
@protocol ASDTIOServiceManagerDelegate;

@interface ASDTIOServiceManagerDelegateProxy : NSObject

@property (weak, nonatomic) id<ASDTIOServiceManagerDelegate> delegate;
@property (retain, nonatomic) NSSet *idValues;

+ (id)forDelegate:(id)a0 andIDValues:(id)a1;

- (void).cxx_destruct;

@end
