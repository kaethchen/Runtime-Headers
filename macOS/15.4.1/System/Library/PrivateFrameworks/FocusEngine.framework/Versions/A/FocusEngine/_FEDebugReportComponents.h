@class NSString;

@interface _FEDebugReportComponents : NSObject

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *footer;

- (id)init;
- (void).cxx_destruct;

@end
