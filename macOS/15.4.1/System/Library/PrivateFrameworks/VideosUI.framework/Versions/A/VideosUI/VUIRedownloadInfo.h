@class AMSBuyParams;

@interface VUIRedownloadInfo : NSObject

@property (retain, nonatomic) AMSBuyParams *buyParams;
@property (nonatomic) long long redownloadType;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
