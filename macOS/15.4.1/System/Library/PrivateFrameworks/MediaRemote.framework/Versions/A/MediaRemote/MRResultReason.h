@class NSString;

@interface MRResultReason : NSObject

@property (readonly, nonatomic) BOOL result;
@property (readonly, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (id)initWithResult:(BOOL)a0 format:(id)a1;
- (id)initWithResult:(BOOL)a0 reason:(id)a1;

@end
