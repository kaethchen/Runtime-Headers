@class NSUUID;

@interface CLMicroLocationLoi : NSObject

@property (retain, nonatomic) NSUUID *loiIdentifier;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andType:(long long)a1;

@end
