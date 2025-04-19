@class NSDate;

@interface DateFormattingContext : NSObject

@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) BOOL isLuminanceReduced;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReferenceDate:(id)a0 isLuminanceReduced:(BOOL)a1;

@end
