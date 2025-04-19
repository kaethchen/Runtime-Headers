@protocol PPConnectionsLocationSourceDelegate;

@interface PPConnectionsSource : NSObject

@property (weak, nonatomic) id<PPConnectionsLocationSourceDelegate> delegate;

+ (id)identifier;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
