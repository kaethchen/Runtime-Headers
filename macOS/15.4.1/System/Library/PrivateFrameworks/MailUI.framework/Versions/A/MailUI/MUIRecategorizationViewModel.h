@class NSString;

@interface MUIRecategorizationViewModel : NSObject

@property (nonatomic, retain) void /* unknown type, empty encoding */ tokenAddress;
@property (nonatomic) void /* unknown type, empty encoding */ businessID;
@property (nonatomic, retain) void /* unknown type, empty encoding */ category;
@property (nonatomic, readonly) NSString *displayName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTokenAddress:(id)a0 businessID:(long long)a1 category:(id)a2;

@end
