@protocol MKAPIServerDelegate;

@interface MKAPIServer : NSObject

@property (weak, nonatomic) id<MKAPIServerDelegate> delegate;
@property (nonatomic) long long preferredChannel;

- (void).cxx_destruct;

@end
